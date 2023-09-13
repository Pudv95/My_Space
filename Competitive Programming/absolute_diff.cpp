#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long maxi = INT_MIN, mini = INT_MAX, pos = INT_MAX;
        for (long long i = 0; i < n; i++)
        {
            long long val;
            cin >> val;
            val = abs(val);
            maxi = max(maxi, val);
            mini = min(mini, val);
        }

        cout<<"The maximum value is :" <<maxi<<endl <<"The minimum value is "<<mini<<endl;

        cout << maxi - mini;
    }
}
