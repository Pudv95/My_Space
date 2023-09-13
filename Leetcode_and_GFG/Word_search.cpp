#include<bits/stdc++.h>
using namespace std;

bool solve(vector<vector<char>>& board, string word,string curr,int i,int j){
    if(word.size() == curr.size() || i==board.size() || j == board[0].size() || i == -1 || j == -1){
        return word == curr;
    }
    curr+=board[i][j];
    board[i][j] = '.';
    solve(board,word,curr,i,j-1);
    curr.pop_back();
    solve(board,word,curr,i,j+1);
    curr.pop_back();
    solve(board,word,curr,i-1,j);
    curr.pop_back();
    solve(board,word,curr,i+1,j);

}

bool exist(vector<vector<char>>& board, string word) {
    vector<vector<char>> temp = board;
    bool found = false;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();i++){
            string curr = "";
            board = temp;
            if(board[i][j] == word[0]){
                found = solve(board,word,curr,i,j);
                if(found){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    cout<< (exist(board,"SEE")?"Found":"Not Found")<<endl;
    return 0;
}