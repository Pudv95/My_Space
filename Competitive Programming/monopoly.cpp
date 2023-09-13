#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    while(T--){
        int P,Q,R,S;
        cin>>P>>Q>>R>>S;
        if((P+Q+R)<S || (Q+R+S)<P || (S+R+P)<Q || (P+Q+S)<R){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}