#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i] == '?' && i == 0){
                s[i] = '0';
            }
            else if( s[i] == '?'&& s[i-1] == '1' ){
                s[i] = '1';
            }
            else if(s[i] == '?'&& s[i-1] == '0'){
                s[i] = '0';
            }
        }
        cout<<s<<endl;
    }

    return 0;
}