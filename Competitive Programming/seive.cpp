#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

// 1 2 3 4 5 6 7 8 9 10
// 0 1 1 1 1 1 1 1 1 1 
// 3

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        int n,m;
        cin>>n>>m;
        bool arr[m+1] = {0};
        int ans = 0;
        for(int i=2;i<=m;i++){
            if(!arr[i]){
                if(i>=n) ans++;
                for(int j=i;j<=m;j+=i){
                    arr[j]=1;
                }
            }
        }
        cout<<ans-1<<endl;
    }

    return 0;
}