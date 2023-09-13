#include<bits/stdc++.h>
using namespace std;

//majority element

int bruteForce(vector<int>& nums){
    int ans = -1;
    int key = 0;
    unordered_map<int,int> temp;
    for(int i=0;i<nums.size();i++){
        temp[nums[i]]++;
    }
    for(auto it: temp){
        if(ans<it.second){
            key = it.first;
            ans = it.second;
        }
    }
    if(ans>nums.size()/2){
        return key;
    }
    return -1;
}

int votingAlgo(vector<int>& nums){
    int element = -1;
    int counter = 0;
    for(int i=0;i<nums.size();i++){
        if(counter=0){
            element = nums[i];
        }
        if(element == nums[i]){
            counter++;
        }
        else{
            counter--;
        }
    }
    return element;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<bruteForce(arr);
    return 0;
}