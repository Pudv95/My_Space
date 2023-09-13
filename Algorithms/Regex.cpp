#include<bits/stdc++.h>
using namespace std;



int main(){
    regex exp ("abc",regex_constants::icase); // checking the exact alphabets
    regex exp1 ("abc.",regex_constants::icase); // any new alphabet but not more than one
    regex exp3 ("abc?",regex_constants::icase); // either last character aayega ya nhi aayega (only abc abc and ab will be matched)
    regex exp4 ("abc*",regex_constants::icase); //
    string s;
    while (true){
        cin>>s;
        bool match = regex_match(s,exp4);
        cout<<(match?"Matched":"Not Matched")<<endl<<endl;
    }

    return 0;
}