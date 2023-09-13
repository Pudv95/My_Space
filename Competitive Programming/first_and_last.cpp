#include <iostream>
using namespace std;
#define ll long long

void search(int arr[], int y, int size)
{
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;
    int s = 0;
    int e = size - 1;
    int mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if(arr[mid] == y){
            ans.second = mid;
            s = mid+1;
        }
        else if(arr[mid]>y){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    s = 0;
    e = size-1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if(arr[mid] == y){
            ans.first = mid;
            e = mid-1;
        }
        else if(arr[mid]>y){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout << ans.first << " " << ans.second << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[a];
    for (ll i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    while (b--)
    {
        ll y;
        cin >> y;
        search(arr, y, a);
    }
        return 0;
}
