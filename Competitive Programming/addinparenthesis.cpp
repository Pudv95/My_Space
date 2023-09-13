#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0;
    for (int  i = 0; i < n-1; i++)
    {
        if(s[i]=='(' && s[i+1] ==')') ans++;
    }
    cout<<ans<<endl;
    
    return 0;
}