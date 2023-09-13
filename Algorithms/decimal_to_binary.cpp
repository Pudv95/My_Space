#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

void solve(int n){
    string s= "";
    while(n){
        if(n&1){
            s+='1';
        }
        else{
            s+='0';
        }
        n>>=1;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}

int main(){
    while(true){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        solve(n);
    }
    return 0;
}