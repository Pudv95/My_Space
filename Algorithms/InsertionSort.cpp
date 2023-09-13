#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    int n;
    cout << "Enter thr size of the array " << endl;
    cin >> n;
    vector<int> temp;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        temp.push_back(h);
    }

    insertion_sort(temp);

    cout << endl
         << "Sorted array is " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << "->";
    }

    return 0;
}