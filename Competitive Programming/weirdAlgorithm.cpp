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
//max of N numbers
int maxAll() { return 0; }
template<typename... Args>
int maxAll(int a, Args... args) { return a>maxAll(args...)?a:(maxAll(args...)); }

void print(ll n){
    cout<<n<<" ";
    if(n == 1){
        return;
    }
    if(n&1){
        n = (3*n+1);
        print(n);
    }
    else{
        n = n/2;
        print(n);
    }
}

void solve(){
    ll n;
    cin>>n;
    print(n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}