#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> uniqueRow(int M[1000][1000], int row, int col)
{
    vector<vector<int>> ans;
    map<vector<int>, int> temp;
    for (int i = 0; i < row; i++)
    {
        vector<int> dump;
        for (int j = 0; j < col; j++)
        {
            dump.push_back(M[i][j]);
        }
        temp[dump]++;
    }
    for (auto it : temp)
    {
        ans.push_back(it.first);
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[1000][1000];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    vector<vector<int>> vec = uniqueRow(a, n, m);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int x : vec[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}