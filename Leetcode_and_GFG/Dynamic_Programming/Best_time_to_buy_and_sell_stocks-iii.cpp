#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int first_buy = -1;
    int second_buy = -1;
    int bought = prices[0];
    for(int i=1;i<prices.size();i++){
        if(bought>prices[i]){
            bought = prices[i];
        }
        else{
            int profit  = prices[i]-bought;
            if(profit > first_buy){
                first_buy = profit;
            }
            else{
                second_buy = max(profit,second_buy);
            }
        }
    }
    cout<<first_buy<<" "<<second_buy<<endl;
    return first_buy+second_buy;
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