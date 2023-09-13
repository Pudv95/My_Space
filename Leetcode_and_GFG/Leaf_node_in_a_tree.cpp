//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long fact(int n)
    {
        int ans = 1;
        int prev = 1;
        for (int i = 0; i < n; i++)
        {
            ans = ans * prev;
            prev += 1;
        }
        return ans;
    }
    long long findLevel(long long N)
    {
        // 1 2 6 24 120 720
        long long count = 0;
        long long level = 0;
        long long fact = 1;
        while (count < N)
        {
            fact*=(level+1);
            count += fact;
            level++;
        }
        return level;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        long long N;
        scanf("%lld", &N);

        Solution obj;
        long long res = obj.findLevel(N);

        cout << res << endl;
    }
}

// } Driver Code Ends