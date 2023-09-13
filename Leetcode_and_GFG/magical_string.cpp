#include<bits/stdc++.h>
using namespace std;

int magicalString(int n) {
        string s = "Manas";
        int counter = 1,i=0;
        int ans = 0;
        while(s.size()<=n){
            if(counter&1){
                if(!s.size() || s[i]=='1'){
                    s+="1";
                }
                else{
                    s+="11";
                }
                counter++;
            }
            else{
                if(s.size() == 1  || s[i] == '2'){
                    s+="22";
                }
                else if(s[i]=='1'){
                    s+="2";
                }
                counter++;
            }
            i++;
            cout<<s<<endl;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans++;
            }
        }
        return ans;
}

int main(){
    int n = 10;
    int ans= magicalString(n);
    cout<<ans;
    return 0;
}