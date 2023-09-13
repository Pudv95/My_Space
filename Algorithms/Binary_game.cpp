#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char temp = 'A';
    cout<<temp;
    char lower = int(temp)|(1<<5);
    cout<<lower;
    char upper = (int(lower)&(~(1<<5)));
    cout<<upper;
    cout<<endl<<endl;
    // another way
    char c = 'a';
    cout << char(c&'_');
    char t = 'P';
    cout<< char(t | ' ');

//upper case karna hai to & kar do underscore(_) k sath
//small karna hai | kar do space( ) k sath

    return 0; 
}