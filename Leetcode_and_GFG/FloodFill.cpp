#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &image, int sr, int sc, int color,int OG){
    if (sr == image.size() || sc == image[0].size() || sr < 0 || sc < 0 || image[sr][sc] == color)
    {
        return ;
    }
    int prev = image[sr][sc];
    if(OG != prev) return;
    image[sr][sc] = color;
    if (sr < image.size() - 1 && image[sr + 1][sc] == prev)
        solve(image, sr + 1, sc, color,OG);
    if (sc < image[0].size() - 1 && image[sr][sc + 1] == prev)
        solve(image, sr, sc + 1, color,OG);
    if (sr > 0 && image[sr - 1][sc] == prev)
        solve(image, sr - 1, sc, color,OG);
    if (sc > 0 && image[sr][sc - 1] == prev)
        solve(image, sr, sc - 1, color,OG);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    solve(image,sr,sc,color,image[sr][sc]);
    return image;
}

int main()
{
    vector<vector<int>> temp = {{0, 0, 0}, {0, 1, 0},{0, 0, 0}};
    temp = floodFill(temp, 0, 0, 2);
    for (auto it : temp)
    {
        for (auto it2 : it)
        {
            cout << it2 << ' ';
        }
        cout << endl;
    }
    return 0;
}