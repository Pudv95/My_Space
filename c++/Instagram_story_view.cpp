//story1  story2  story3  story4  story5
//viewed !viewed  viewed !viewed  viewed

//finally
//story1 story3 story5 story4 story3


#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int nearest_zero = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            int temp = i;
            while(!arr[i] && i<n){
                i++;
            }
            if(i==n) break;
            else{
                swap(arr[temp],arr[i]);
                i = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}