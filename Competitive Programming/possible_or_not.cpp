#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

/*
    *_* Solution By Paras *_*
*/

vector<vector<ll>> subSequence(vector<ll> s){
    vector<vector<ll>> ans;
    int size = s.size();
    for(int i=0;i<pow(2,size);i++){
        vector<ll> temp;
        for(int j=0;j<size;j++){
            if(i&(1<<j)){
                temp.push_back(s[j]);
            }
        }
        if(temp.size())
            ans.push_back(temp);
    }
    return ans;
}

void solve(){
    ll n,b;
    cin>>n>>b;
    vector<ll> arr;
    for(int i=0;i<n;i++){
        ll h;
        cin>>h;
        if(h>=b){
            arr.push_back(h);
        }
    }
    vector<vector<ll>> ans= subSequence(arr);
    for(int i=0;i<ans.size();i++){
        ll temp = ans[i][0];
        for(int j=1;j<ans[i].size();j++){
            temp &= ans[i][j];
        }
        if(temp == b){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO";

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