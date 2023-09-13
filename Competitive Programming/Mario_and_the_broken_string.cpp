#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int o=1;
	    for(int i=0,j=n/2; i < n/2 || j < n; i++, j++){
	        
	       if(s[i]!=s[j]){
	           cout<<"NO"<<endl;
	           o=0;
	           break;
	       }
	    }
	   if(o){
	       cout<<"YES"<<endl;
	   }
	}
	return 0;
}
