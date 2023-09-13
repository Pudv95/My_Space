#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int t;
        cin>>t;
        int even = 0;
        int odd = 0;
        for(int i=1;i<=2*t;i++){
            if(i&1){
                odd+=i;
            }
            else{
                even+=i;
            }
        }
        cout<<odd<<" "<<even<<endl;
    }
	return 0;
}
