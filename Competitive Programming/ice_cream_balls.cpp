#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll nc2(ll a){
    return (a*(a-1))/2;
}

void solve(){
    ll n;
    cin>>n;
    ll left = 1,right = 2648956421;
    while(left<right-1){
        ll m = (left+(right-left)/2);
        if(nc2(m) == n){
            cout<<m<<endl;
            return;
        }
        if(nc2(m)>n){
            right = m;
        }
        else{
            left = m;
        }
    }
    cout<<right+n-nc2(left)-1<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
