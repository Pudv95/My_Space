#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector<string>& board,int n,int i,int j){
    int row = i;
    int col = j;
    while(col>=0){
        if(board[row][col] == 'Q'){
            return false;
        }
        col--;
    }
    col = j;
    while(row>=0 && col>=0){
        if(board[row][col] == 'Q'){
            return false;
        }
        col--;
        row--;
    }
    row = i;
    col = j;
    while(row<n && col>=0){
        if(board[row][col] == 'Q'){
            return false;
        }
        row++;
        col--;
    }
    return true;

}

void solve(vector<string>& board,vector<vector<string>>& ans,int n,int i,int j){
    
    if(i==n || j==n){
        if(j==n) ans.push_back(board);
        return;
    }
    if(canPlace(board,n,i,j)){
        board[i][j] = 'Q';
        solve(board,ans,n,0,j+1);
    }
    board[i][j] = '.';
    solve(board,ans,n,i+1,j);
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board;
    for(int i=0;i<n;i++){
        string row = "";
        for(int j=0;j<n;j++){
            row.push_back('.');
        }
        board.push_back(row);
    }
    solve(board,ans,n,0,0);
    return ans;

}

int main(){
    int n;
    cin>>n;
    vector<vector<string>> ans = solveNQueens(n);
    for(int i=0;i<ans.size();i++){
        cout<<"Board -> "<<i+1<<endl;
        for(int j=0;j<ans[i].size();j++){
            for(int k=0;k<ans[i][j].size();k++){
                cout<<ans[i][j][k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}