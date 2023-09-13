#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin>>n;
    if(n%2){cout<<0<<endl;return 0;}
    else{
        n=n/2;
        cout<<((n%2==0)?n/2-1:n/2)<<endl;
    }
    return 0;
}