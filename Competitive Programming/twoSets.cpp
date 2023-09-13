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

// 1 2 3 4 5 6 7 8 9 10 11
// 1 2 3 4 5 6 7 8 9 10 11 12
//1 2 4 7 8 11
//3 5 6 9 10

void solve(){
    int n;
    cin>>n;
    if(n<3){
        cout<<"NO";
        return;
    }
    if(n%4 == 0 || (n+1)%4 == 0){
        cout<<"YES"<<endl;
        if(n&1){
            cout<<n/2 + 1<<endl;
            cout<<1<<' '<<2<<' ';
            int i=0;
            for(i=0;i<(n-3)/4;i++){
                cout<<i+4<<' '<<n-i<<' ';
            }
            cout<<endl<<n/2<<endl;
            cout<<3<<' ';
            for(;i<(n-3)/2;i++){
                cout<<i+4<<' '<<n-i<<' ';
            }
        }
        else{
            cout<<n/2<<endl;
            int i = 0;
            for(;i<n/4;i++){
                cout<<i+1<<' '<<n-i<<' ';
            }
            cout<<endl<<n/2<<endl;
            for(;i<n/2;i++){
                cout<<i+1<<' '<<n-i<<' ';
            }
        }
    }
    else{
        cout<<"NO";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}