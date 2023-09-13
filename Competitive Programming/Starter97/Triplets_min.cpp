/*
    *_* Solution By Paras *_*
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define umi unordered_map<ll ,ll>
const ll MOD = 1e9+7;

/*
    FUNCTIONS
*/
//nCr
ll NCR[1000][1000];
ll nCr(ll n, ll r){
    if(n==r) return NCR[n][r] = 1; 
    if(r==0) return NCR[n][r] = 1; 
    if(r==1) return NCR[n][r] = n;
    if(NCR[n][r]) return NCR[n][r];
    return NCR[n][r] = (nCr(n-1,r)%MOD + nCr(n-1,r-1)%MOD)%MOD;
}

void solve(){
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(q--){
        ll p;
        cin>>p;
        ll count = 0;
        int j = -1;
        for(int i=n-1;i>=0;i--){
            j++;
            count+=((i*(i-1))/2);
            if(count>=p){
                cout<<arr[j]<<endl;
                break;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}