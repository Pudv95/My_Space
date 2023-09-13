#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

bool loop_detection(Node* head){

    Node* fast  = head;
    Node* slow = head;

    while(fast->next || fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}

int main(){

    Node* temp = new Node(0);
    Node* head = temp;
    int n;
    cout<<"Enter the number of nodes ->";
    cin>>n;
    cout<<"Enter all the nodes values -> ";
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        temp->next = new Node(t);
        temp = temp->next;
    }

    temp->next = head->next->next;

    if(loop_detection){
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"No loop present"<<endl;
    }

    return 0;
}