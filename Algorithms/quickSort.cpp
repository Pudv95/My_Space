#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    while (low < high) {
        while (low < high && arr[high] >= pivot) {
            high--;
        }
        arr[low] = arr[high];
        while (low < high && arr[low] < pivot) {
            low++;
        }
        arr[high] = arr[low];
    }
    arr[low] = pivot;

    return low;
}


void quickSort(int arr[],int low,int high){

    if(low>=high){
        return;
    }
    int ind = partition(arr,low,high);
    
    quickSort(arr,low,ind-1);
    quickSort(arr,ind+1,high);
    
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
    int s=0,high=temp.size()-1;

    quickSort(temp,s,high);
        
    
    cout<<endl<<"Sorted array is "<<endl;

    for (int  i = 0; i < n; i++)
    {
        cout<<temp[i]<<"->";
    }    
    return 0;
}