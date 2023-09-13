#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        if(i&1){
            if(nums[i]<0){
                continue;
            }
            else{
                int temp = i;
                while(nums[temp]>=0){
                    temp++;
                }
                swap(nums[temp],nums[i]);
            }
        }
        else{
            if(nums[i]>=0){
                continue;
            }
            else{
                int temp = i;
                while(nums[temp]<0){
                    temp++;
                }
                swap(nums[temp],nums[i]);
            }                    
        }
    }
    return nums;
}

int main(){
    vector<int> temp{28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};
    rearrangeArray(temp);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<' ';
    }
    return 0;
}


void reverseArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}