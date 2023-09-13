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

void solve(){
    unordered_map<char,int> temp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        temp[s[i]]++;
    }
    int flag = 0;
    char tattiChar;
    int tattiCount = 0;
    for(auto it:temp){
        if(it.second&1){
            tattiChar = it.first;
            tattiCount = it.second;
            flag++;
            if(flag>=2){
                cout<<"NO SOLUTION"<<endl;
                return;
            }
        }
    }
    string ans = "";
    for(auto it:temp){
        if(it.second&1){
            continue;
        }
        else{
            for(int i=0;i<it.second/2;i++){
                ans.push_back(it.first);
            }
        }
    }
    string ans2 = ans;
    reverse(ans2.begin(),ans2.end());
    for(int i=0;i<tattiCount;i++){
        ans+=tattiChar;
    }
    ans+=ans2;
    cout<<ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}