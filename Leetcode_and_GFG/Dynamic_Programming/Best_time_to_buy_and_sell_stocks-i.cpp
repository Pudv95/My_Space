#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit = 0;
    int curr = prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]<curr){
            curr = prices[i];
        }
        profit = max(profit,prices[i]-curr);
    }
    return profit;
}

void solve(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int ans = maxProfit(prices);
    cout<<ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}