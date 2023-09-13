#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums,int i){
    if(i == nums.size()-1){
        return 0;
    }
    int n = nums.size(),mini = 1e9,jump = nums[i];
    for(int k =i+1;k<=min(jump+i,n-1);k++){
        int val = 1+solve(nums,k);
        mini = min(mini,val);
    }
    return mini;
}

int jump(vector<int>& nums){
    int i =0;
    return solve(nums,i);
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = jump(nums);
    cout<<ans<<endl;
    return 0;
}