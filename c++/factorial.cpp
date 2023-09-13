#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=0;i<n;i++){
        ans*=i+1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += (i/fact(i));
    }
    cout<<sum;
    return 0;
}