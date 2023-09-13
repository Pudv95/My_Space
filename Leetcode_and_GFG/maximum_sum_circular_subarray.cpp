#include<bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int currSum = 0;
    int maxSum = 0;
    int j=0;
    int circle = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = maxSubarraySumCircular(nums);
    cout<<ans<<endl;
    return 0;
}