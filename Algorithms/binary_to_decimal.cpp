#include<bits/stdc++.h>
using namespace std;

int binToDeci(string n){
    return stoi(n,0,2);
}

string deciToBinary(int n){
    return bitset<32>(n).to_string();
}

int main(){
    string s;
    cin>>s;
    // int n;
    // cin>>n;
    cout<<binToDeci(s);

    return 0;
}