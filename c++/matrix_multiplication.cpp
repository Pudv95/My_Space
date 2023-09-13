#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> m1,vector<vector<int>> m2){
    int r1 = m1.size(),c = m1.size(),c2 = m2[0].size();
    vector<vector<int>> result(r1,vector<int>(c2,0));
    for(int i=0;i<r1;i++){
        for(int j = 0;j<c2; j++){
            for(int k=0;k<c;k++){
                result[i][j] += m1[i][k]+m2[k][j];
            }
        }
    }
    return result;
}

int main(){
    int r1,l,c2;
    cin>>r1>>l>>c2;
    vector<vector<int>> m1,m2;
    for(int i=0;i<r1;i++){
        vector<int> temp;
        for(int j=0;j<l;j++){
            int y;
            cin>>y;
            temp.push_back(y);
        }
        m1.push_back(temp);
    }
    for(int i=0;i<l;i++){
        vector<int> temp;
        for(int j=0;j<c2;j++){
            int y;
            cin>>y;
            temp.push_back(y);
        }
        m2.push_back(temp);
    }
    vector<vector<int>> temp = multiply(m1,m2);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<temp[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}