#include <bits/stdc++.h>
using namespace std;

string sayNumber(string num){
    int count = 1;
    string ans = "";
    char front = num[0];
    for(int i=1;i<num.size();i++){
        if(front == num[i]){
            count++;
        }
        else{
            ans += to_string(count);
            ans += front;
            front = num[i];
            count = 1;
        }
    }
    ans += to_string(count);
    ans += front;
    return ans;
}

string countAndSay(int n){
    if(n==1) return "1";
    return sayNumber(countAndSay(n-1));
}

int main()
{
    cout<<countAndSay(4);
    return 0;
}