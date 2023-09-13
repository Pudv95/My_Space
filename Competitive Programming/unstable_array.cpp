#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    // int T;
    // cin >> T;
    // while(T--){
    //     int a;
    //     cin>>a;
    //     int arr[a];
    //     for(int i=0;i<a;i++){
    //         cin>>arr[a];
    //     }
        int a = 5;
        int arr[5] = {1,2,3,4,5};
        int curr = 0;
        int unstable = 0;
        int ans = 0;
        for(int i=0;i<a-1;i++){
            for(int j=i+1;j<a;j++){
                unstable = arr[j]-arr[i];
                int temp =  (arr[j-1]-arr[j]);
                curr += temp;
                if(curr != unstable) ans++;
            }
            curr = 0;
        }
        cout<<ans<<endl;
	// }
	return 0;
}