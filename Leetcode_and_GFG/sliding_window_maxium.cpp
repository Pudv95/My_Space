#include<bits/stdc++.h>
using namespace std;

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> temp;
        for(int i=0;i<nums.size()-k+1;i++){
            int v = i+k-1;
            temp.push_back(*max_element(nums.begin()+i,nums.begin()+i+k));
        }
        return temp;
    }

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    vector<int> temp = maxSlidingWindow(nums,k);
    for (int i = 0; i < temp.size(); i++)
    {
        cout<<temp[i]<<' ';
    }
    
    return 0;
}