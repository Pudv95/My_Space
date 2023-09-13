#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){

    int min_ind = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int  j = i; j < arr.size(); j++)
        {
            if(arr[min_ind]>arr[j]){
                min_ind = j;
            }    
        }
        swap(arr[min_ind],arr[i]);
                
    }
    
}

int main(){

    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    vector<int> temp;
    cout<<"Enter the elements of the array"<<endl;
    for (int  i = 0; i < n; i++)
    {
        int h;
        cin>>h;
        temp.push_back(h);
    }
    
    selectionSort(temp);
    
    cout<<endl<<"Sorted array is "<<endl;

    for (int  i = 0; i < n; i++)
    {
        cout<<temp[i]<<"->";
    }    
    
    return 0;
}