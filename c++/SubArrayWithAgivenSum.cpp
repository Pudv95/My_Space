//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        if(s==0) return {-1};
        vector<int> ans = {-1};
        long long sum = 0;
        for(int i=0,j=0;i<n;){
            // cout<<sum<<", ";
            
            if(sum+arr[i]<s){
                sum+=arr[i];
                i++;
            }
            else if(sum+arr[i]>s){
                sum-=arr[j];
                j++;
            }
            else{
                ans.push_back(i+1);
                ans[0] = j+1;
                return ans;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends