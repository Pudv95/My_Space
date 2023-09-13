//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:	
		
	int isDivisible(string s){
        int rem = 0;
        for(char c : s){
            int digit = c-'0';
            rem = (rem*2 + digit)%3;
        }
        return rem == 0; 
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends