#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9 + 7;
const double pi = 3.141592653589793238;
#define umll unordered_map<long long, long long>
#define mll map<long long, long long>

const int N = 1e4;
ll pie, friends;
ll radius[N];

double volume(ll radius)
{
    return pi * radius * radius;
}

bool canDistribute(int radii)
{
    if (radii == 0)
        return 0;
    int currFriends = 0;
    for (int i = 0; i < pie; i++)
    {
        currFriends += int(volume(radius[i]) / volume(radii));
    }
    return currFriends >= friends;
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
        cin >> pie >> friends;
        friends++;
        for (int i = 0; i < pie; i++)
        {
            cin >> radius[i];
        }
        ll s = 0, e = 1e4;
        ll ans = -1;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            if (canDistribute(mid))
            {
                s = mid + 1;
                ans = mid;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << volume(ans) << endl;
    }

    return 0;
}