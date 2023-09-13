#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<mini){
            mini = arr[i];
        }
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"Minimum number is -> "<<mini<<" and maximum number is -> "<<maxi;
    
    return 0;
}