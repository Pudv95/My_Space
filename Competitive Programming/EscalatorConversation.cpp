#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k,h;
    cin>>n>>m>>k>>h;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int p=0;p<n;p++){
                if(k*(j-i) == abs(h-arr[p])){ count++;
                arr[p] = -999;}
            }
        }
    }
    cout<<count<<endl;
}
//5 4 3 2 1
//1 2 3 4 5
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}