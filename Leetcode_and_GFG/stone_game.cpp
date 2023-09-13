#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>& piles,int alice,int bob,int i,int j){
    if(i>=j) return alice>bob;
    alice+=piles[i];
    bob+=piles[j];
    bool a = solve(piles,alice,bob,i+1,j-1);
    bob-=piles[j];
    bob+=piles[i+1];
    bool b = solve(piles,alice,bob,i+2,j);
    alice-=piles[i];
    bob-=piles[i+1];
    
    alice+=piles[j];
    bob+=piles[i];
    bool c = a;
    bob-=piles[i];
    bob+=piles[j-1];
    bool d = solve(piles,alice,bob,i,j-2);

    return a||b||c||d;
}

bool stoneGame(vector<int>& piles) {
    // return solve(piles,0,0,0,piles.size()-1);

}



int main(){
    int T;
    cin>>T;
    while(T--){int n;
    cin>>n;
    vector<int> stone(n);
    for(int i=0;i<n;i++){
        cin>>stone[i];
    }
    if(stoneGame(stone)){
        cout<<1<<endl;
    }
    else cout<<0<<endl;}
    return 0;
}