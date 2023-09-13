#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umll unordered_map<long long ,long long>
#define mll map<long long,long long>

template<typename K,typename V>
std::ostream &operator<<(std::ostream &os,const std::map<K, V> &m) {
    for (const std::pair<K, V> &p: m) {
        os << '{' << p.first << ':' << p.second << '}'<<endl;
    }
    return os;
}

template <typename T, size_t N>
istream& operator>>(istream& is, T (&arr)[N]) {
    for (size_t i = 0; i < N; i++) {
        is >> arr[i];
    }
    return is;
}

template <typename T, size_t N>
ostream& operator<<(ostream& os, T(&arr)[N]) {
    os << '[';
    for (size_t i = 0; i < N; i++) {
        os << arr[i];
        if (i != N-1) {
            os << ',';
        }
    }
    os << ']';
    return os;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        
    }
    return 0;
}