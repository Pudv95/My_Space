/*
 *_* Solution By Paras *_*
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

/*
    FUNCTIONS
*/
// nCr
int NCR[1000][1000];
int nCr(int n, int r)
{
    if (n == r)
        return NCR[n][r] = 1;
    if (r == 0)
        return NCR[n][r] = 1;
    if (r == 1)
        return NCR[n][r] = n;
    if (NCR[n][r])
        return NCR[n][r];
    return NCR[n][r] = (nCr(n - 1, r) % MOD + nCr(n - 1, r - 1) % MOD) % MOD;
}

string cipher(string temp, int s)
{
    string answer = "";
    for (int i = 0; i < temp.length(); i++)
    {
        answer += char(int(temp[i] + s - 97) % 26 + 97);
    }
    return answer;
}

void solve()
{
    int n;
    cin >> n;
    string s, t, u;
    cin >> s >> t >> u;
    int shift = t[0] - s[0];
    if (shift < 0)
        shift = 26 + shift;
    cout << cipher(u,shift) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}