#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

/*
    *_* Solution By Paras *_*
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,k,L;
        cin>>n>>k>>L;
        vi length;
        for(int i=0;i<n;i++){
            int m,l;
            cin>>m>>l;
            if(l==L){
                length.push_back(m);
            }
        }
        if(length.size()<k){
            cout<<-1<<endl;
            continue;
        }
        int ans = 0;
        sort(length.begin(),length.end());
        for(int i=0;i<k;i++){
            ans+=length[length.size()-1-i];
        }
        cout<<ans<<endl;
    }
    return 0;
}