#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int a;
        cin>>a;
        if(a == 0){
            cout<<1<<endl;
        }
        else{
            cout<<3*a<<endl;
        }
    }
    return 0;
}