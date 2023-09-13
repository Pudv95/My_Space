#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

/*
    *_* Solution By Paras *_*
*/

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll maxi = 0;
    int count = 0;
    for(int i = n-1;i>=0;i--){
        if(arr[i]<=maxi){
            maxi^=arr[i];
        }
        else{
            count++;
            maxi = max(arr[i],maxi);
        }
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}