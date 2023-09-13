#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

const int N = 1e6+10;
int n;
ll h;
ll arr[N];

bool canCut(int mid){
    ll wood = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            wood+=(arr[i]-mid);
        }
    }
    return wood>=h;
}

int main(){
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll s = 0;
    ll e = 1e9;
    ll ans;
    while (s<=e){
        ll mid = s+(e-s)/2;
        if(canCut(mid)){
            s = mid+1;
            ans = mid;
        }
        else{
            e = mid-1;
        }
    }
    cout<<ans<<endl;    
    return 0;
}