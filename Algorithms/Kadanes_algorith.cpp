#include <bits/stdc++.h>
using namespace std;

int max_subarray_sum(vector<int> &arr)
{
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        curr_sum += arr[i];
        max_sum = max(curr_sum, max_sum);
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    return max_sum;
}
int main()
{
    int n;
    cout << "Enter the lenght of the array -> ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int ans = max_subarray_sum(arr);
    cout << "The maximum subarray sum is -> " << ans << endl;
    return 0;
}