#include <bits/stdc++.h>
using namespace std;

map<char, int> countLetter(string s)
{
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    return mp;
}
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    map<map<char, int>, vector<string>> temp;

    for (int i = 0; i < strs.size(); i++)
    {
        map<char,int> mp = countLetter(strs[i]);

        temp[mp].push_back(strs[i]);
    }
    for (auto it : temp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> temp = groupAnagrams(strs);
    cout<<'[';
    for(int i=0;i<temp.size();i++){
        cout<<'[';
        for(int j=0;j<temp[i].size();j++){
            cout<<temp[i][j];
            if(j != temp[i].size()-1){
                cout<<", ";
            }
        }
        cout<<"],";
    }
    cout<<"]";
    return 0;
}