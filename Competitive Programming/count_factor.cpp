#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int T = 2;
    while (T--)
    {
        ll n = 10;
        ll count = 0;
        for (ll i = 1; i < sqrt(n); i++)
        {
            if ((n % i) == 0)
                count += 2;
        }
        cout << count;
    }
    return 0;
}
