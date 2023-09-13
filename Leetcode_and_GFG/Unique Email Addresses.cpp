#include <bits/stdc++.h>
using namespace std;

int numUniqueEmails(vector<string>& emails) {
    // int ans = 0;
    set<string> temp;
    for(int i=0;i<emails.size();i++){
        int add = 1;
        int a = 0;
        int j=0;
        string s = "";
        while(j<emails[i].size()){
            if((emails[i][j] == '+')){
                add = 0;
            }
            if(emails[i][j] == '@'){
                add = 1;
                a = 1;
            }
            if(add || a){
                if((emails[i][j] != '.') || a)
                    s += emails[i][j];
            }
            j++;
        }
        cout<<s<<endl;
        temp.insert(s);
    }
    return temp.size();
}
