#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define umi unordered_map<ll ,ll>
const ll MOD = 1e9+7;

/*
    FUNCTIONS
*/
//nCr
ll NCR[1000][1000];
ll nCr(ll n, ll r){
    if(n==r) return NCR[n][r] = 1;
    if(r==0) return NCR[n][r] = 1;
    if(r==1) return NCR[n][r] = n;
    if(NCR[n][r]) return NCR[n][r];
    return NCR[n][r] = (nCr(n-1,r)%MOD + nCr(n-1,r-1)%MOD)%MOD;
}
//power
long long power(ll N, ll R){
    if(R == 1) return N;
    if(R == 0) return 1;
    long long temp = power(N,R/2);
    return (R&1)?(((temp*temp)%MOD)*N)%MOD:(temp*temp)%MOD;
}
//max of N numbers
ll maxAll() { return 0; }
template<typename... Args>
ll maxAll(ll a, Args... args) { return a>maxAll(args...)?a:(maxAll(args...)); }

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0; i < n; i++){
        cin>>arr[i];
        if((arr[i]%2) && (arr[i]%3)){
            if(arr[i] == 1) continue;
            cout<<-1<<endl;
            return;
        }
    }
    ll mini = *min_element(arr,arr+n);
    ll ans = 0;
    if(mini%6 == 0){
        for(ll i=0;i<n;i++){
            while(arr[i] != mini){
                if(arr[i]%2 == 0 && arr[i]/2 >= mini && ((arr[i]/2)%6 == 0)){
                    ans++;
                    arr[i]/=2;
                }
                if(arr[i]%3 == 0 && arr[i]/3 >= mini && ((arr[i]/3)%6 == 0)){
                    ans++;
                    arr[i]/=3;
                }
            }
        }
    }
    else{
        for(ll i=0;i<n;i++){
            while(arr[i] != 1){
                if(arr[i]%2 == 0){
                    ans++;
                    arr[i]/=2;
                }
                if(arr[i]%3 == 0){
                    ans++;
                    arr[i]/=3;
                }
            }
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