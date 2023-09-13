#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long arr[n];
	arr[0]=0;
	for(long long i=1;i<=n;i++){
	    long long h;
	    cin>>h;
	    arr[i]= arr[i-1]+h;
	}
	long long q;
	cin>>q;
	while(q--){
	    long long a,b;
	    cin>>a>>b;
	    cout<<arr[b]-arr[a-1]<<endl;
	}
	return 0;
}
