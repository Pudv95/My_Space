#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

int clumsyFactorial(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n == 3) return 6;
    if(n==4) return 7;
    if(n%4 == 1) return n+2;
    if(n%4 == 2) return n+2;
    if(n%4 == 3) return n-1;
    if(n%4 == 0) return n+1;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int ans = clumsyFactorial(n);
    cout<<ans<<endl;
}