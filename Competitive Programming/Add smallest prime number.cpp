#include <bits/stdc++.h>
using namespace std;


int main()
{
    int Test_case;
    cin >> Test_case;

    for (int i = 0; i < Test_case; i++)
    {

        int to_make, orignal;
        cin >> to_make >> orignal;
        int curr_sum;
        if (!(to_make % 2))
        {
            curr_sum = (orignal - to_make) / 2;
            if ((orignal - to_make) & 1)
            {
                cout << curr_sum + 1 << endl;
            }
            else
            {
                cout << curr_sum << endl;
            }
            continue;
        }
        curr_sum = 1;
        if (!(to_make % 3))
        {
            to_make += 3;
            curr_sum += (orignal - to_make) / 2;
    if ((orignal - to_make) & 1)
    {
        cout << curr_sum + 1 << endl;
    }
    else
    {
        cout << curr_sum << endl;
    }
            continue;
        }
        else
        {
            to_make += to_make;
            curr_sum += (orignal - to_make) / 2;
    if ((orignal - to_make) & 1)
    {
        cout << curr_sum + 1 << endl;
    }
    else
    {
        cout << curr_sum << endl;
    }
            continue;
        }
    }

    return 0;
}