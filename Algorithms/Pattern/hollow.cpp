#include<bits/stdc++.h>
using namespace std;


void solve(int r,int c){
    char  l='A';
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if( j == 0 || i == 0 ||j == c-1 || i == r-1){
                cout<<l++<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int r,c;
    while(true){
        cin>>r>>c;
        solve(r,c);
    }
    return 0;

}