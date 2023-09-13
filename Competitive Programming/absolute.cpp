#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n;
    long long l = 0, r = 0;
    for (long long i = 0; i < n; i++)
    {
        long long t;
        cin >> t;
        l += t;
    }
    cin >> m;
    for (long long i = 0; i < m; i++)
    {
        long long t;
        cin >> t;
        r += t;
    }
    cout << abs(l - r);
    return 0;
}








// how to write your own comparator function