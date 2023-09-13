#include<bits/stdc++.h>
using namespace std;

int binarySearch(int nums[], int s,int e,int target){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int linearSearch(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    while(k--){
        int test;
        cin>>test;
        if(binarySearch(arr,0,n-1,test) != -1){
            cout<<"YES"<<endl;
        }
        else{   
            cout<<"NO"<<endl;
        }
    }
}