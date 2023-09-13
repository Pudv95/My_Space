#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int fact1 (int n){
    int ans = 1;
    for(int i=0;i<n;i++){
        ans*=(i+1);
    }
    return ans;
}

bool isPalindrome(string s,int n){
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n/2-abs(i-(n+1)/2);j++){
            cout<<j+1<<' ';
        }
        cout<<endl;
    }
    int ans = 0;
    for(int  i=1;i<=n;i++){
        ans+=(i/fact(i));
    }
    // cout<<ans;
    return 0;
}