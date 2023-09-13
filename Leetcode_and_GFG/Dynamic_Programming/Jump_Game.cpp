#include <bits/stdc++.h>
using namespace std;


//My Recursive Approach {Top - Down}
bool trials(vector<int> &nums,int i,int n){
    if(i >= n){
        return true;
    }
    if(nums[i] == 0){
        return false;
    }
    bool ans = false;
    for(int k=1;k<=nums[i];k++){
        ans  = ans||trials(nums,i+k,n);
    }
    return ans;
}

//Memoization with Top down Recursive
bool memoTrials(vector<int> &nums,vector<int> &memo,int i,int n){
    if(i>=n-1) return true;
    if(memo[i] != -1) return memo[i];
    if(nums[i] == 0){
        memo[i] = 0;
        return memo[i];
    }
    for(int k=0;k<nums[i];k++){
        if(memoTrials(nums,memo,i,n)){
            memo[i] = 1;
            return true;
        }
        memo[i] = 0;
    }
    return false;
}

//Bottom-Up
bool bottomUp(vector<int> &nums){
    int num = nums[0];
    for(int i=0;i<nums.size();i++){
        if(num == 0){
            return false;
        }
        num = max(num-1,nums[i]);
    }
    return true;
}

bool canJump(vector<int> &nums)
{
    int i=0;
    int n = nums.size();
    vector<int> memo(n,-1);
    return bottomUp(nums);
    return memoTrials(nums,memo,i,n);
    return trials(nums,i,n);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    if (canJump(nums))
    {
        cout << "YES The Frog Can Jump" << endl;
    }
    else
    {
        cout << "Cant jump" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}