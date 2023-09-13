#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> keys = {{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};


void solve(string digits,string& ans,vector<string>& to_return,int i,int j){
    if (i == digits.size() || j == keys[digits[i]-'0'-2].size()) {
        if (ans.size() == digits.size())
            to_return.push_back(ans);
        return;
    }
    ans += keys[digits[i]-'0'-2][j];
    solve(digits, ans, to_return, i+1, 0);
    ans.pop_back();
    solve(digits, ans, to_return, i, j+1);
}

vector<string> letterCombinations(string digits) {
    vector<string>ans;
    string temp = "";
    solve(digits,temp,ans,0,0);
    return ans;
}

int main(){
    string s="234";
    vector<string> ans = letterCombinations(s);
    cout<<'[';
    for(int i=0;i<ans.size();i++){
        cout<<'"'<<ans[i]<<'"';
        if(i!=ans.size()-1){
            cout<<',';
        }
    }
    cout<<']';
    return 0;
}