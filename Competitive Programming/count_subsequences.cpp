#include <iostream>
using namespace std;

int main() {
	int t,n,m,k,q,x,v;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>m>>k;
	    int sum=0;
	    int arr[n][m];
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            arr[i][j]=(i)*m+(j+1);
	        }
	    }
	    for(int a=0; a<k; a++){
	        cin>>q>>x>>v;
	        if(q==0){
	            for(int i=0; i<m; i++){
	                arr[x+1][i]=(arr[x+1][i])*v;
	            }
	        }
	        else if(q==1){
	            for(int i=0; i<n; i++){
	                arr[i][x+1]=(arr[i][x+1])*v;
	            }
	        }
	    }
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            sum=sum+arr[i][j];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}