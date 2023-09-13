#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

void subSequence(string s){
    vector<string> ans;
    int size = s.size();
    for(int i=0;i<pow(2,size);i++){
        string temp = "";
        for(int j=0;j<size;j++){
            if(i&(1<<j)){
                temp += s[j];
            }
        }
        ans.push_back(temp);
    }
    cout<<'{';
    for (int i = 0; i < ans.size(); i++)
    {   
        if(i<ans.size()-1){
            cout<<'['<<ans[i]<<']'<<',';
        }
        else{
            cout<<'['<<ans[i]<<']'<<'}';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    subSequence(s);
    return 0;
}