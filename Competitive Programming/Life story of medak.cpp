#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> dp(n, 0);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            int score = arr[i] * (i - j) + dp[j];
            dp[i] = max(dp[i], score);
        }
    }

    cout << dp[n - 1] << endl;
}



int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}