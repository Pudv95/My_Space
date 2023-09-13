#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    char vike[4] = {'v','i','k','a'};
    int k = 0;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<m;i++){
        if(k==4)break;
        for(int j=0;j<n;j++){
            if(arr[j][i] == vike[k]){
                k++;
                break;
            }
        }
    }
    if(k == 4) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
}


int main(){
    
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}