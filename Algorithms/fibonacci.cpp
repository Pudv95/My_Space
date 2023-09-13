#include<bits/stdc++.h>
using namespace std;

int fibor(int n){

    return (n==1 || n==0) ? n : fibor(n-1)+fibor(n-2);

}

int fibo(int n){
    int prev = 0;
    int next = 1;
    if(n == 1) return 1;
    for(int i=2;i<n;i++){
        int curr = prev+next;
        prev = next;
        next = curr;
    }
    return next;
}

int main(){
    cout<<fibo(85);
    return 0;
}