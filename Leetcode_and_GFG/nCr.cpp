#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

int NCR[1000][1000];
int nCr(int n, int r){
    if(n==r) return NCR[n][r] = 1; 
    if(r==0) return NCR[n][r] = 1; 
    if(r==1) return NCR[n][r] = n;
    if(NCR[n][r]) return NCR[n][r];
    return NCR[n][r] = (nCr(n-1,r)%MOD + nCr(n-1,r-1)%MOD)%MOD;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<nCr(n,m);
    return 0;
}