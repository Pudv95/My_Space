#include<bits/stdc++.h>
using namespace std;

string originalDigits(string s) {
    unordered_map<char,int> dict;
    for(int i=0;i<s.size();i++){
        dict[s[i]]++;
    }
    string ans = "";
    while(dict['z']){
        ans+='0';
        dict['z']--;
        dict['e']--;
        dict['r']--;
        dict['o']--;
    }
    while(dict['x']){
        ans+='6';
        dict['s']--;
        dict['i']--;
        dict['x']--;
    }
    while(dict['u']){
        ans+='4';
        dict['f']--;
        dict['o']--;
        dict['u']--;
        dict['r']--;
    }
    while(dict['g']){
        ans+='8';
        dict['e']--;
        dict['i']--;
        dict['g']--;
        dict['h']--;
        dict['t']--;
    }
    while(dict['w']){
        ans+='2';
        dict['t']--;
        dict['w']--;
        dict['o']--;
    }
    while(dict['f']){
        ans+='5';
        dict['f']--;
        dict['i']--;
        dict['v']--;
        dict['e']--;
    }
    while(dict['v']){
        ans+='7';
        dict['s']--;
        dict['e']--;
        dict['v']--;
        dict['e']--;
        dict['n']--;
    }
    while(dict['r']){
        ans+='3';
        dict['t']--;
        dict['h']--;
        dict['r']--;
        dict['e']--;
        dict['e']--;
    }
    while(dict['o']){
        ans+='1';
        dict['o']--;
        dict['n']--;
        dict['e']--;
    }
    while(dict['e']){
        ans+='9';
        dict['n']--;
        dict['i']--;
        dict['n']--;
        dict['e']--;
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<originalDigits(s);
    return 0;
}