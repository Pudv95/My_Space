#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

int numWaterBottles(int numBottles, int numExchange) {
    return (numBottles<numExchange)?numBottles:numBottles-(numBottles%numExchange)+numWaterBottles((numBottles/numExchange)+(numBottles%numExchange),numExchange);
}
//15
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a ,b ;
    cin>>a>>b;
    int ans = numWaterBottles(a,b);
    cout<<ans<<endl;
    return 0;
}