
#include <bits/stdc++.h>
using namespace std;

#define files                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define rall(x) x.rbegin(), x.rend()
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define ll long long

#define rep(ii, beg, till, inc) for (int ii = beg; ii < till; ii += inc)
#define repr(ii, beg, till, inc) for (int ii = beg - 1; ii >= till; ii -= inc)

const ll MOD = 1e9 + 7;
const int MXN = 2e5 + 5;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void sol(int tc)
{
    int N;
    cin >> N;
    int K;
    cin >> K;
    vector<int> aa(N);
    rep(ii, 0, N, 1) cin >> aa[ii];
    sort(all(aa));

    auto can = [&](ll row)
    {
        ll sum = 0;
        rep(ii, 0, N, 1)
            sum += min(row, 1LL * aa[ii]);
        return K <= sum / row;
    };

    ll low = 0, high = 1LL << 60;
    while (high - low > 1)
    {
        ll mid = (low + high) / 2;
        if (can(mid))
            low = mid;
        else
            high = mid;
    }
    cout << low << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    for (int ii = 1; ii <= T; ++ii)
        sol(ii);
}