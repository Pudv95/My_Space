#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    map<int,int> temp;
    for(int i=0;i<nums.size();i++){
        temp[nums[i]]++;
    }
    int ans = 0;
    for(auto it: temp){
        int count = it.second;
        if(count>2){
            count = 2;
        }
        for(int i=0;i<count;i++){
            nums[ans] = it.first;
            ans++;
        }
    }
    return ans;
}

int main(){ 
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    int ans = removeDuplicates(nums);
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}