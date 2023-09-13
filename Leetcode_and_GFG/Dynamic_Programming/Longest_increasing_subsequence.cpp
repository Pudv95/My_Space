#include<bits/stdc++.h>
using namespace std;

int solve(int nums[],int n,int longest,int curr,int i){
    if(i == n) return 0;
    int num = nums[i];
    for(int j=i+1;j<n;j++){
        if(nums[j]>num){
            curr = 1+solve(nums,n,longest,curr,j+1);
        }
        longest = max(curr,solve(nums,n,longest,curr,j));
    }
    return longest;
}
// [10,9,2,5,3,7,101,18]
int lengthOfLIS(int nums[],int n) {
    return solve(nums,n,1,1,0);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<lengthOfLIS(arr,n);
    return 0;
}