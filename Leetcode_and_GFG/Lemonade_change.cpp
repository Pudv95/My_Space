//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

template <typename K, typename V>
std::ostream &operator<<(std::ostream &os, const std::map<K, V> &m)
{
    for (const std::pair<K, V> &p : m)
    {
        os << '{' << p.first << ':' << p.second << '}' << endl;
    }
    return os;
}
// } Driver Code Ends
class Solution
{
public:
    bool lemonadeChange(int N, vector<int> &bills)
    {
        map<int, int> cash;
        for (int i = 0; i < N; i++)
        {
            cash[bills[i]]++;
            if (bills[i] > 5)
            {
                if (bills[i] == 20)
                {
                    if (cash[10] && cash[5])
                    {
                        cash[10]--;
                        cash[5]--;
                        continue;
                    }
                    else if (cash[5] > 2)
                    {
                        cash[5] -= 3;
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
                if (bills[i] == 10)
                {
                    if (cash[5])
                    {
                        cash[5]--;
                        continue;
                    }
                    else
                    {
                        cout << "yaha aaya " << endl;
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int N;
    cin >> N;

    vector<int> bills(N);
    for (int i = 0; i < N; i++)
        cin >> bills[i];

    Solution obj;
    int ans = obj.lemonadeChange(N, bills);
    if (ans)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
// } Driver Code Ends