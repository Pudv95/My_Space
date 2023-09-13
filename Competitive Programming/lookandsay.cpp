//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string read(string temp){
        temp.push_back('p');
        string ans = "";
        for(int i = 0; i < temp.size(); i++){
            int count = 1;
            while(temp[i] == temp[i+1]){
                count++;
                i++;
            }
            ans += to_string(count);
            ans.push_back(temp[i]);
        }
        ans.pop_back();
        ans.pop_back();
        return ans;
    }
    string lookandsay(int n) {
        if(n==1) return "1";
        return read(lookandsay(n-1));
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends