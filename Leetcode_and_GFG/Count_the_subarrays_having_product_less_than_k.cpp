//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &arr, int n, long long k)
    {
        long long curr = 1;
        int ans = 0;
        for(int i=0,j=0;i<n;i++){
            curr*=arr[i];
            while(curr>=k && j<=i){
                curr/=arr[j];
                j++;
            }
            ans+=i-j+1;
        }
        return ans;
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
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends