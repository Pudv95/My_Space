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
    int n;
    cin>>n;
    vector<string> temp;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        temp.push_back(s);
        mp[s]++;
    }
    string ans = "";
    for(int i=n-1;i>=0;i--){
        if(mp[temp[i]]){
            ans += temp[i][temp[i].size()-2];
            ans += temp[i][temp[i].size()-1];
            mp[temp[i]] = 0;
        }
    }
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}