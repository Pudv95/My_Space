#include<bits/stdc++.h>
using namespace std;

// 4 8 12 16 20 24 

int lastRemaining(int n) {
    return n==1?1:2*(1+n/2+lastRemaining(n/2));
}

    //(1+22-8)*2

int main(){
    // int ans = lastRemaining(100);
    // cout<<ans;
    int k = 1000;
    while(k--){int ans = lastRemaining(1000-k+1);cout<<1000-k+1<<"->"<<ans<<endl;}
    return 0;
}