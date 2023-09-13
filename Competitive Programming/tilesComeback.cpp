#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin>>arr[i];
    }
    int back = b,front = b,i=a-1;
    int main = arr[i],j=0;
    while(i+1 && back){
        if(main == arr[i]){
            back--;
            if(back == 0) break;
        }
        i--;
    }

    main = arr[0];
    while (j<a && front){
        if(arr[j] == main) {
            front--;
            if(front == 0) break;
        }
        j++;
    }
    if(((j<i) || (arr[0] == arr[a-1])) && !front && !back)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}