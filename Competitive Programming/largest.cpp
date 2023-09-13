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
        int a;
        cin>>a;
        int curr = -1;
        int prev = -1;
        for(int i=0;i<a;i++){
            int t;
            cin>>t;
            if(curr == t){
                continue;
            }
            if(curr == -1){
                curr = max(t,curr);
            }
            else{
                if(t>curr){
                    prev = curr;
                    curr = t;
                }
                else{
                    prev = max(t,prev);
                }
            }
        }
        cout<<curr+prev<<endl;
    }
    return 0;
}