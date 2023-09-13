#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

void merge(vi &arr, int s, int e)
{

    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = s;

    int firstIndex = 0;
    int secondIndex = 0;

    while (firstIndex < len1 && secondIndex < len2)
    {

        if (first[firstIndex] < second[secondIndex])
        {
            arr[mainArrayIndex++] = first[firstIndex++];
        }

        if (first[firstIndex] > second[secondIndex])
        {
            arr[mainArrayIndex++] = second[secondIndex++];
        }
    }
    while (firstIndex < len1)
    {
        arr[mainArrayIndex++] = first[firstIndex++];
    }

    while (secondIndex < len2)
    {
        arr[mainArrayIndex++] = second[secondIndex++];
    }

    delete[] first;
    delete[] second;
}

// since single element is always sorted we break the array till single element is left
// and then start to merge it

void mergeSort(vector<int> &arr, int s, int e)
{

    // base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{

    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> temp;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        temp.push_back(h);
    }

    mergeSort(temp, 0, n);

    cout << endl
        << "Sorted array is " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << "->";
    }

    return 0;
}