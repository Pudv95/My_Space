#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a;
        cin>>a;
        char string[a];
        for (int i = 0; i < a; i++)
        {
            cin>>string[i];
        }
        
        sort(string,string+a);
        char mid = string[a/2];
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            int to_add = (mid - string[i]);
            int to_add1 = (string[i] - mid);
            if(mid>string[i]){
                sum = sum + to_add;
            }
            else{
                sum = sum + to_add1;
            }
        }
        cout<<sum<<endl;
        
    }

    return 0;
}