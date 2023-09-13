//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // int maxIndexDiff(int arr[], int n)
    // {
    //     int diff = n - 1;
    //     for (int i = diff; i >= 0; i--)
    //     {
    //         for (int j = 0; j < n - i; j++)
    //         {
    //             int k = j + i;
    //             cout << j << "->" << k << endl;
    //             if (arr[k] >= arr[j])
    //             {
    //                 return i;
    //             }
    //         }
    //     }
    //     return 0;
    // }
    int maxIndexDiff(int arr[], int n) {
        int left[n], right[n];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        for(int i = 1; i < n; i++){
            left[i] = min(left[i-1], arr[i]);
        }
        for(int i = n-2; i >= 0; i--){
            right[i] = max(right[i+1], arr[i]);
        }
        int i=0,j=0,maxDiff =0;
        while (i < n && j < n) {
            if (left[i] <= right[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }
        return maxDiff;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends