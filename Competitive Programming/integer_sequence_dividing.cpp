#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<m+n;i++){
        if(i<m){
            cin>>brr[i];
        }
        else{
            cin>>arr[i-m];
        }
    }
    for(int i=0;i<m+n;i++){
        if(i<m){
            cout<<brr[i]<<" ";
        }
        else{
            cout<<arr[i-m]<<" ";
        }
        if(i == m) cout<<endl;
    }



    //1 2 3 4 5 6 7 8 9
    
    return 0;
    //
}

