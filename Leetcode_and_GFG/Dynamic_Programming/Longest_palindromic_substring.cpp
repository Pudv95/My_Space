//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    // void solve(string A,int i,int j ,int longest,int curr){
    //     if(i<0 || j==A.size()){
    //         longest = max(curr,longest);
    //         return;
    //     }
    //     else{
    //         if(A[i] == A[j]){
    //             solve(A,i-1,j+1,longest,curr+2);
    //         }
    //     }
    //     longest = max(curr,longest); 
    // }
    int length_of_palindrome(string A,int i,int j){
        for(i,j;i>=0 && j<A.size();i--,j++){
            if(A[i] != A[j]){
                break;
            }
        }
        if(i<0) i=0;
        if(j>=A.size()) j = A.size()-1;
        return j-i+1;
    }

    int longestPalinSubstr(string A)
    {
        int longest = -1;
        for(int i=0;i<A.size();i++){
            longest = max(longest,length_of_palindrome(A,i,i));
        }
        for(int i=0;i<A.size()-1;i++){
            longest = max(longest,length_of_palindrome(A,i,i+1));
        }
        return length_of_palindrome(A,4,4);
    }
    int longestPalinSubseq(string A) {
        
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends