#include<bits/stdc++.h>
using namespace std;

int singleNumber(int nums[],int n) {
    int temp = 0;
    for(int i=0;i<n-1;i+=2){
        temp^=(nums[i]|nums[i+1]);
        cout<<nums[i]<<" "<<nums[i+1]<<" ";
    }
    return temp;
}

/*
2 2 3 4 2 4 4
2 7 6
*/

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<singleNumber(arr,n);
    return 0;
}