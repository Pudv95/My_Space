//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// a a
// a

class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        string a = "";

        int first_non_repeating = 0;
        map<char, int> freq;
        for (int current_element = 0; current_element < A.size();current_element++)
        {
            freq[A[current_element]]++;
            if (freq[A[first_non_repeating]] <= 1)
            {
                a += A[first_non_repeating];
            }
            else if (current_element == first_non_repeating)
            {
                a += '#';
            }
            else if (freq[A[first_non_repeating]] > 1)
            {
                first_non_repeating++;
                freq[A[current_element]]--;
                current_element--;
            }
        }
        return a;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string A;
        cin >> A;
        Solution obj;
        string ans = obj.FirstNonRepeating(A);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends