#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll N,Q;
    cin>>N>>Q;
    int n = N*N;
    while(Q--){
        ll a;
        cin>>a;
        ll count = 0,num = N,diagonal=0;
        ll i=0;
        ll curr = n;
        while(count <= curr){
            count += (num - abs(num-i));
            if(count>=a){
                cout<<diagonal<<endl;
                break;
            }
            diagonal++;
            i++;
        }
    }
    return 0;
}