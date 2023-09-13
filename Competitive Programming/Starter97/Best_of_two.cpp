/*
    *_* Solution By Paras *_*
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

/*
    FUNCTIONS
*/
//nCr
int NCR[1000][1000];
int nCr(int n, int r){
    if(n==r) return NCR[n][r] = 1; 
    if(r==0) return NCR[n][r] = 1; 
    if(r==1) return NCR[n][r] = n;
    if(NCR[n][r]) return NCR[n][r];
    return NCR[n][r] = (nCr(n-1,r)%MOD + nCr(n-1,r-1)%MOD)%MOD;
}

void solve(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int alice = a+b+c-min(a,min(b,c));
    int bob = d+e+f - min(d,min(e,f));
    if(alice>bob){
        cout<<"Alice"<<endl;
    }
    else if(alice == bob){
        cout<<"TIE"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
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