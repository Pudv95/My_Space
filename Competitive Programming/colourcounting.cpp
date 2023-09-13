#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        if(k>n){
            ll result = 1;
            for (int i = 0; i < n; i++)
            {
                result = (result*(k--))%1000000007;
            }
            cout<<result<<endl;            
            continue;
        }
        ll result = 1;
        for (int i = 1; i <= k; i++)
        {
            result = (result * i) % 1000000007;
        }
        cout << result << endl;
    }
    return 0;
}
