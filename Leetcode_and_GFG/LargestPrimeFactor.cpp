//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    bool isPrime(long long n){
        
        for(int i=2;i<=sqrt(n);i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        if(isPrime(N)) return N;
        
        for(long long i=N;i>=0;i--){
            if(N%i == 0 && isPrime(i)){
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends