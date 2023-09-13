#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int mindiff = INT_MAX;
    bool sorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        int diff = (arr[i+1]-arr[i]);
        mindiff = min(mindiff,diff);
        if(mindiff < 0 ){
            sorted = 1;
        }
    }
    if(sorted){
        cout<<0<<endl;
    }
    else{
        cout<<ceil((n+1)/2)<<endl;
    }
    return 0;
}