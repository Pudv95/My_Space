//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int solve(int n){
        int number = 0;
        while(n){
            number+=pow(n%10,2);
            n/=10;
        }
        return number;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        //floyd loop detection algorithm
        do{
            slow = solve(slow);
            fast = solve(solve(fast));
            if(fast == 1){
                return true;
            }
        }while(fast!=slow);
        return false;
    }
    int nextHappy(int N){
        while (true)
        {
            N++;
            if(isHappy(N)){
                return N;
            }
        }
        return 0;
        
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
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends