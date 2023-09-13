#include<bits/stdc++.h>
using namespace std;



int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int brr[n];
        int k = 0;
        int prev = 0;
        for(int i=n-1;i>=0;i--){
            if(k==n)break;
            int temp = (arr[i]-prev);
            while(temp--){
                if(k==n) break;
                brr[k++] = i+1;
            }
            prev = arr[i];
        }
        bool flag = 0;
        for(int i=0;i<n;i++){
            if(arr[i] != brr[i]){
                cout<<"no"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag) continue;
        cout<<"yes"<<endl;
    }
    return 0;
}