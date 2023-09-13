#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> temp;
    for(int i=0;i<n-1;i++){
        for (int j = i+1; j < n; j++)
        {
            temp.push_back(arr[i]+arr[j]);
        }
        
    }
    //1 2 3 4 5
    sort(temp.begin(),temp.end());
    int middle  = temp.size()/2;
    int middle2 = middle-1;
    cout<< (double)(temp[middle2]+temp[middle])/2<<endl;
    return 0;
}