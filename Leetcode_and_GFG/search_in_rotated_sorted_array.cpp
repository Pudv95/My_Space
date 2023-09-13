#include<iostream>
#include<vector>
#include<string>
using namespace std;
int binarySearch(vector<int> nums, int s,int e,int target){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    int pivotElement(vector<int> nums){
        int s= 0,e= nums.size()-1;
        while(s<e){
            int mid= s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int s = 0, e=size-1;
        int mid = s+(e-s)/2;
        int pivot = pivotElement(nums);
        cout<<pivot;
        if(nums[0]<=target){
            return binarySearch(nums,0,pivot,target);
        }
        else{
            return binarySearch(nums,pivot,e,target); 
        }
    }
int main(){
    vector<int> arr;
    int size ;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans = search(arr,key);
    cout<<ans;
}
    
