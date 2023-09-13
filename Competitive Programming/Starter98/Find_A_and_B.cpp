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
//power
long long power(int N, int R){
    if(R == 1) return N;
    if(R == 0) return 1;
    long long temp = power(N,R/2);
    return (R&1)?(((temp*temp)%MOD)*N)%MOD:(temp*temp)%MOD;
}

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a*b)%c == 0){
        cout<<a*b<<" "<<c<<endl;
    }
    else if((a*c)%b == 0){
        cout<<a*c<<" "<<b<<endl;
    }
    else if((b*c)%a == 0){
        cout<<b*c<<" "<<a<<endl;
    }
    else{
        cout<<-1<<endl;
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