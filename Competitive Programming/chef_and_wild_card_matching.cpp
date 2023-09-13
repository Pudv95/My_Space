#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    int k = 0;
	    for(int i=0;i<a.size();i++){
	        if(a[i]=='?' || b[i] == '?'){
	            continue;
	        }
	        if(a[i]!=b[i]){
	            cout<<"NO"<<endl;
	            k=2;
	            break;
	        }
	    }
	    if(!k){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
