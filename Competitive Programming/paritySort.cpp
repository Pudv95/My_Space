#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        brr[i] = arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if((arr[i]&1) != (brr[i]&1)){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}