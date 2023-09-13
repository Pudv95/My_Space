#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const ll MOD = 1e9+7;
#define umi unordered_map<int ,int>

bool canMakeArithmeticProgression(vector<int>& arr) {
        int d = arr[0] - arr[1];
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] - arr[i+1] != d) return false;
        }
        return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {509,-19,-439,-264,-404,-369,-299,-89,-229,-54,-194,16,-544,-159,-124,-474,-334};
    string ans = canMakeArithmeticProgression(arr)?"yes":"no";
    cout<<ans<<endl;
    return 0;
}