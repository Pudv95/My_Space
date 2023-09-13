#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int p = n;
    n = (2*n - 1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<<'('<<i<<','<<j<<')'<<" ";
            if(i+j<n)
                cout<<p-min(i,j)<<" ";
            else
                cout<<p-min(n-i-1,n-1-j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    while (true)
    {
        cin>>n;
        if(n == 0) break;
        solve(n);
    }
    
    return 0;
}