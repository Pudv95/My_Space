#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        swap(arr[i],arr[arr[i]-1]);
    }
}

int main(){
    vector<int> temp = {1,3,2,4};
    countSort(temp);
    for(auto it: temp){
        cout<<it<<' ';
    }
    return 0;
}