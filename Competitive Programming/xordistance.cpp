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
    int N,K;
    vector<vi> A;
    long long ans = 0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            int distance = ((A[i][0])^(A[j][0]))+((A[i][1])^(A[j][1]));
            if(distance == K){
                ans++;
            }
        }
    }
    return ans;
    return 0;
}