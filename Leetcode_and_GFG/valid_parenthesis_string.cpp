#include<bits/stdc++.h>
using namespace std;

bool checkValidString(string s) {
    stack<pair<char,int>> temp;
    int star = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] =='('){
            temp.push(make_pair('(',i));
        }
        else if(s[i] == ')'){
            if(temp.size() && temp.top().first == '('){
                s[i] = '.';
                s[temp.top().second] = '.';
                temp.pop();
            }
        }
    }
    vector<pair<char,int>> leftBracket;
    vector<pair<char,int>> starGroup;
    for(int i=0;i<s.size();i++){
        if(s[i] == '.') continue;
        if(s[i] == '('){
            leftBracket.push_back(make_pair('(',i));
        };
        if(s[i] == ')'){
            if(starGroup.size()){
                s[i] = '.';
                s[starGroup[starGroup.size()-1].second] = '.';
                starGroup.pop_back();
            }
        }
        if(s[i] == '*'){
            if(leftBracket.size()){
                s[i] = '.';
                s[leftBracket[leftBracket.size()-1].second] = '.';
                leftBracket.pop_back();
            }
            else{
                starGroup.push_back(make_pair('*',i));
            }
        }
    }
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(' || s[i] == ')'){
            return false;
        }
    }
    return true;
}


int main(){
    string s;
    cin>>s;
    if(checkValidString(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}