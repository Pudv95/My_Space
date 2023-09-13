/*
    *_* Solution By Paras *_*
*/

#include<bits/stdc++.h>
#include<regex>
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count= 0;
    for(int i=0;i<n;i++){
        if(s[i] == ':'){
            i++;
            if(s[i] == ')'){
                while(s[i]==')'){
                    i++;
                }
                if(s[i]==':'){
                    count++;
                    i--;
                }
            }else{
                i--;
            }
        }
    }
    cout<<count<<endl;
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