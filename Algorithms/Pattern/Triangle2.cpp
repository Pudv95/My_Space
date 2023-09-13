#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int height;
        cin >> height;
        int width = 2 * height - 1;
        int s = width / 2;
        int e = width / 2;
        int temp = height & 1 ? 1 : 0;
        cout<<temp<<endl;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if ((j >= s && j <= e) && (temp & 1))
                {
                    cout << " " <<" ";
                }
                else
                {
                    cout << "* ";
                }
                temp++;
            }
            s--;
            e++;
            cout << endl;
        }
    }
    return 0;
}