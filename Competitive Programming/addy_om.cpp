#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

/*
    *_* Solution By Paras *_*
*/

void solve(){
    ll s;
    cin>>s;
    ll addy[s];
    ll om[s];
    int s_addy = 0;
    int temp1 = 0,temp2 = 0;
    int s_om = 0;
    for(int i=0;i<s;i++){
        cin>>addy[i];
    }
    for(int i=0;i<s;i++){
        cin>>om[i];
    }
    for(int i=0;i<s;i++){
        if(addy[i] == 0){
            temp1 = 0;
        }
        else temp1++;
        if(om[i] == 0){
            temp2 = 0;
        }
        else temp2++;
        s_addy = (temp1>=s_addy)?temp1:s_addy;
        s_om = (temp2>=s_om)?temp2:s_om;
    }
    // cout<<s_addy<<" "<<s_om<<endl;
    if(s_addy>s_om){
        cout<<"Om"<<endl;
    }
    else if(s_addy<s_om){
        cout<<"Addy"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
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