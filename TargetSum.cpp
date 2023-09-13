#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int target,int i){
    if(i == nums.size()) return target == 0;
    return solve(nums,target+nums[i],i+1) + solve(nums,target-nums[i],i+1);
}
/*
-1-1
-1+1
+1-1
+1+1
*/

int findTargetSumWays(vector<int>& nums, int target) {
    int ans = 0;
    return solve(nums,target,0);
}

int main(){
    int target;
    cin>>target;
    int n;cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<< findTargetSumWays(arr,target);

    return 0;
}