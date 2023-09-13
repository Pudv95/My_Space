#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int op,sum; 
        cin>>op>>sum;
        if((op + 1 < sum) || (sum<0 && op <= -sum)){
            cout<<-1<<endl;
            continue;
        }

        if(sum>0){
            int m = op-sum+1;
            for (int i = 0; i < m; i++)
            {
                    cout<<'*';
            }
            for (int i = 0; i < op-m; i++)
            {
                    cout<<'+';
            }            
        }
        else if(sum < 0){
            sum = abs(sum) + 1;
            int m = op-sum+1;
            for (int i = 0; i < m-1; i++)
            {
                    cout<<'*';
            }
            for (int i = 0; i < op-m+1; i++)
            {
                    cout<<'-';
            }
        }
        else{
            cout << "-";
            for (int i = 0; i < op-1; i++)
            {
                cout << "*";
            }
        }
    cout << endl;

	}
	return 0;
}
