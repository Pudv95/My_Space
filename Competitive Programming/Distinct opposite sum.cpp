#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a,i;
        cin>>a;
        if(a==2){
            cout<<2<<" "<<1<<endl;
            continue;
        }
        for (i = a/2; i > 0; i--)
        {
            cout<<i<<" ";
        }
        for(i=a/2+1;i<=a;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}