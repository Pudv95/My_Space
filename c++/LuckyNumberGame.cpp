#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

/*
    *_* Solution By Paras *_*
*/
string alice = "ALICE";
string bob = "BOB";

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll arr[n];
    ll temp = lcm(a,b);
    ll count = 0;
    string turn = bob;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%temp){
            count++;
        }        
    }
    string ans;
    if(count&1){
        turn = alice;
    }
    if(turn == alice){
        ans = (a>=b)?alice:bob;
    }else{
        ans = (a>=b)?alice:bob;
    }
    cout<<ans<<endl; 

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