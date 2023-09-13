#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr){

    for(int i=0;i<arr.size()-1;i++){

        for(int j=0;j<arr.size()-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }
}
//64 2 2 45 2 6 2

int main(){

    int n;
    cout<<"Enter thr size of the array "<<endl;
    cin>>n;
    vector<int> temp;
    cout<<"Enter the elements of the array"<<endl;
    for (int  i = 0; i < n; i++)
    {
        int h;
        cin>>h;
        temp.push_back(h);
    }
    
    bubble_sort(temp);
    
    cout<<endl<<"Sorted array is "<<endl;

    for (int  i = 0; i < n; i++)
    {
        cout<<temp[i]<<"->";
    }    
    
    return 0;
}