#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
const ll MOD = 1e9 + 7;
#define umi unordered_map<ll, ll>

/*
 *_* Solution By Paras *_*
 */

void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;
    ll cap[n];
    ll out[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> cap[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> out[i];
    }
    ll ans = 0;
    sort(out, out + m, greater<ll>());
    sort(cap, cap + n, greater<ll>());
    for (ll i = 0; i < n && i < m; i++)
    {
        ans += (min(cap[i], out[i]*h));
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}