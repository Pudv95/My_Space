#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        int ch = 1,one = 0;
	    cin>>n;
	    char arr[n];
	    for(int i=0;i<n;i++){
	        if(!i)
	            cin>>arr[i];
	        else{
	            cin>>arr[i];
	            if(arr[i]==arr[i-1] && arr[i]=='1'){
	                cout<<2<<endl;
	                ch = 0;
	                break;
	            }
	        }
            if(arr[i] == '1'){
	            one = 1;
	        }
            cout<<arr[i]<<"->";
	    }
        cout<<endl;
	    if(ch && one){
	        cout<<1<<endl;
	    }
	    else if(ch && !one){
	        cout<<0<<endl;
	    }
        cout<<"ch is -> "<<ch<<" and one is -> "<<one <<endl;
	}
	return 0;
}
