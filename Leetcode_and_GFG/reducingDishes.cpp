#include<bits/stdc++.h>
using namespace std;

int maxSatisfaction(vector<int>& satisfaction) {
    int curr = 0,max = 0;
    sort(satisfaction.begin(),satisfaction.end());
    if(satisfaction[satisfaction.size()-1] <= 0 ) return 0;
    int time = 1;
    for(int i = 0;i<satisfaction.size();i++){
        for(int j=satisfaction.size()-1;j>=0&&j>=satisfaction.size()-i-1;j--){
            curr+=satisfaction[j];
        }
        if(curr<max) return max;
        max = curr;
    }
    return max;
}

int main(){
    vector<int> satisfaction = {4,3,2};
    cout<<maxSatisfaction(satisfaction);
    return 0;
}