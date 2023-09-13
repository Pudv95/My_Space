#include<bits/stdc++.h>
using namespace std;

void solve(int n, int i, int k, vector<vector<int>>& ans, vector<int>& comb){
    if(comb.size() == k){
        ans.push_back(comb);
        return;
    }
    for(;i<=n;i++){
        comb.push_back(i);
        solve(n,i+1,k,ans,comb);
        comb.pop_back();
    }
}
vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    vector<int> comb;
    solve(n,1,k,ans,comb);
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> ans = combine(n,k);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}