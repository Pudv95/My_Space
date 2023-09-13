#include<bits/stdc++.h>
using namespace std;

string decodeString(string s) {
    string ans = "";
    string temp = "";
    int brackets = 0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == ']'){
            brackets++;
            continue;
        }
        else if(s[i] == '['){
            brackets--;
            if(brackets){
                i--;
                int num = s[i]-'0';
                for(int k=0;k<num;k++){
                    ans+=temp;
                }
                temp = ans;
                ans = "";
            }
            else{
                i--;
                int num = s[i]-'0';
                for(int k=0;k<num;k++){
                    ans+=temp;
                }
                temp = "";
            }            
        }
        else if(brackets){
            temp+=s[i];
        }
        else{
            ans+=s[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<decodeString(s);
    return 0;
}  