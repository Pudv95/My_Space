#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

/*
    FUNCTIONS
*/
//nCr
int NCR[1000][1000];
int nCr(int n, int r){
    if(n==r) return NCR[n][r] = 1;
    if(r==0) return NCR[n][r] = 1;
    if(r==1) return NCR[n][r] = n;
    if(NCR[n][r]) return NCR[n][r];
    return NCR[n][r] = (nCr(n-1,r)%MOD + nCr(n-1,r-1)%MOD)%MOD;
}
//power
long long power(int N, int R){
    if(R == 1) return N;
    if(R == 0) return 1;
    long long temp = power(N,R/2);
    return (R&1)?(((temp*temp)%MOD)*N)%MOD:(temp*temp)%MOD;
}
//max of N numbers
int maxAll() { return 0; }
template<typename... Args>
int maxAll(int a, Args... args) { return a>maxAll(args...)?a:(maxAll(args...)); }

void bombItUp(vector<vector<char>> &arr,int r1,int c1,int a,int b,char power){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int manDis = abs(r1-i)+abs(c1-j);
            if(manDis<=power-'0'){
                arr[i][j]='.';
            }
        }
    }
}


void solve(){
    int a,b;
    cin>>a>>b;
    char brr[a][b];
    vector<vector<char>> arr;
    for(int i=0;i<a;i++){
        vector<char> p;
        for(int j=0;j<b;j++){
            char temp;
            cin>>temp;
            p.push_back(temp);
            brr[i][j] = temp;;
        }
        arr.push_back(p);
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(isdigit(brr[i][j])){
                bombItUp(arr,i,j,a,b,brr[i][j]);
            }
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}