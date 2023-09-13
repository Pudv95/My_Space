//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


class Solution
{
    public:
    void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* Ones = new Node(0);
        Node* Twos = new Node(0);
        Node* Zeros = new Node(0);
        Node* zero = Zeros;
        Node* one  = Ones;
        Node* two = Twos;
        while(head){
            if(head->data == 0){
                Zeros->next = new Node(0);
                Zeros = Zeros->next;
            }
            if(head->data == 1){
                Ones->next = new Node(1);
                Ones = Ones->next;
            }
            if(head->data == 2){
                Twos->next = new Node(2);
                Twos = Twos->next;
            }
            head = head->next;
        }
        if(two->next){
            two = two->next;
        }
        else{
            two = NULL;
        }
        if(one->next){
            one = one->next;
        }else{
            one = NULL;
        }
        if(zero->next){
            zero = zero->next; 
        }
        else{
            zero = NULL;
        }
        printList(zero);
        printList(one);
        printList(two);
        if(zero){
            if(one){
                Zeros->next = one;
                Ones->next = two;
            }
            else{
                Zeros->next = two;
            }
            return zero;
        }
        else{
            if(one){
                Ones->next = two;
                return one;
            }
            else{
                return two;
            }
        }
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends