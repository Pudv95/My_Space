#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

const int N = 1e6+10;
ll n,c;
ll arr[N];

bool canPlace(ll mid){
    int cowCount = 1;
    int currPos= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-currPos>=mid){
            cowCount++;
            if(cowCount == c){
                return true;
            }
            currPos = arr[i];
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        cin>>n>>c;
        for (int i = 0; i < n; i++)`
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans = -1;
        ll s = 0,e = 1e9;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(canPlace(mid)){
                s = mid+1;
                ans = mid;
            }
            else{
                e = mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}