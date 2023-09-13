#include<bits/stdc++.h>
using namespace std;

void solve(){    
    int n,m,k;
    cin>>n>>m>>k;
    int j = 1;
    int arr[k];
    int size = k;

    for(int i=m;k>0;k--){
        arr[j-1] = i;
        i-=(j++);
    }

    if(arr[size-1] < n){
        cout<<-1<<endl;
        return;
    }
    else{
        arr[size-1] = n;
    }

    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}


int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}