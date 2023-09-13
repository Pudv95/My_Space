//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    pair<int, int> findMinMax(vector<int>& arr, int i, int j) {
    int minElement = numeric_limits<int>::max();
    int maxElement = numeric_limits<int>::min();
    
    for(int k = i; k <= j; k++) {
        if(arr[k] < minElement) {
            minElement = arr[k];
        }
        if(arr[k] > maxElement) {
            maxElement = arr[k];
        }
    }
    
    return make_pair(minElement, maxElement);
}
    int totalCuts(int N,int K,vector<int> &A){
        int counter = 0;
        for(int i=0;i<N-1;i++){
            pair<int,int> left = findMinMax(A,0,i);
            pair<int,int> right = findMinMax(A,i+1,N-1);
            cout<<left.second<<" "<<right.first<<endl;
            if(left.second+right.first>=K) counter ++;
        }
        return counter;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends