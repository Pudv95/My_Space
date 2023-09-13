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
    return (R&1)?(((temp*temp))*N):(temp*temp);
}
//max of N numbers
int maxAll() { return 0; }
template<typename... Args>
int maxAll(int a, Args... args) { return a>maxAll(args...)?a:(maxAll(args...)); }

void solve(){
    ll x,y;
    cin>>x>>y;
    ll rowNum = (x&1)?(power(x-1,2)+1):(power(x,2));
    ll colNum = (y&1)?(power(y,2)):power(y-1,2)+1;
    // cout<<rowNum<<' '<<colNum<<endl;
    if(rowNum>colNum){
        if(x&1){
            cout<<rowNum+(y-1)<<endl;
        }
        else{
            cout<<rowNum-(y-1)<<endl;
        }
    }
    else{
        if(y&1){
            cout<<colNum-(x-1)<<endl;
        }
        else{
            cout<<colNum+(x-1)<<endl;
        }
    }

}

// 1 2 9 10 25 4 3 8 11 24

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