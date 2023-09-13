#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    map<int,int> temp;
	    for(int i=0;i<a+b;i++){
	        char a;
	        cin>>a;
	        temp[a]++;
	    }
	    vector<int> arr;
	    for(auto i:temp){
	        arr.push_back(i.second);
	    }
	    sort(arr.begin(),arr.end(), greater <>());
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     cout<<arr[i]<<"->";
        // }
        
	    bool check = true;
	    for(int i=0;i<arr.size()-1;i++){
	        if((arr[i]&1)){
	            cout<<"NO"<<endl;
	            check = false;
	            break;
	        }
	    }
	    if(check){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
