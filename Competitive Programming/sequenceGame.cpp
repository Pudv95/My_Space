#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long arr[n];
    long long prev = -1;
    vector<long long> ans;
    for(long long i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i]>=prev){
            ans.push_back(arr[i]);
        }
        else{
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }
        prev = arr[i];
    }
    cout<<ans.size()<<endl;
    for(long long i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}

//i-1 <= i

// 1 0 1 2 1 2 3 2  
//