#include<bits/stdc++.h>
using namespace std;

template<typename K,typename V>
std::ostream &operator<<(std::ostream &os,const std::map<K, V> &m) {
    for (const std::pair<K, V> &p: m) {
        os << '{' << p.first << ':' << p.second << '}'<<endl;
    }
    return os;
}

string toHex(int num) {
        string ans = "";
        map<int,char> mp = {
            {0,'0'},{1000,'8'},
            {1,'1'},{1001,'9'},
            {10,'2'},{1010,'a'},
            {11,'3'},{1011,'b'},
            {100,'4'},{1100,'c'},
            {101,'5'},{1101,'d'},
            {110,'6'},{1110,'e'},
            {111,'7'},{1111,'f'},
        };
        // 11010
        // 01111
        // 01010
        while(num!=0){
            int temp = num&15;
            num>>=4;
            char c = mp[temp];
            ans += c;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main(){
    for(int i=0;i<26;i++)
    cout<<toHex(i)<<"->";
    return 0;
}