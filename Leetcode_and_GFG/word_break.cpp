#include<bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {
    map<char,int> temp;
    for(int i=0;i<s.size();i++){
        temp[s[i]]++;
    }
    for(int i=0;i<wordDict.size();i++){
        if(s.find(wordDict[i])!=s.size()){
            for(int j=0;j<wordDict[i].size();j++){
                temp[wordDict[i][j]]--;
                if(temp[wordDict[i][j]] < 0){
                    return false;
                }
            }
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    string s = "bb";
    vector<string> wordDict = {"a","b","bbb","bbbb"};
    if(wordBreak("bb",wordDict)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}