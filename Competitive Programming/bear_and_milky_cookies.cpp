#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,l=0;
        cin>>n;
        vector<string> temp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            temp.push_back(s);
        }
        if(temp[0]== "cookie" && n==1){
            cout<<"NO"<<endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if(temp[i]=="cookie" && temp[i-1]=="cookie"){
                cout<<"NO"<<endl;
                l=1;
                break;
            }
        }
        if(temp[n-1] == "cookie" && !l){
            cout<<"NO"<<endl;
            continue;
        }
        if(!l){
            cout<<"YES"<<endl;
        }
        
    }

    return 0;
}