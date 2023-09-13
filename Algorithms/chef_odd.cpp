#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll a, b;
        cin >> a >> b;
        if (a & 1)
        {
            if(b==1) {
                cout<<"NO"<<endl;
                continue;
            }
            if (b < (a / 2) && !(b & 1))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (b <= (a / 2) && b & 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
