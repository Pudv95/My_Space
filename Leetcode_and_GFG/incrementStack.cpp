#include<bits/stdc++.h>
using namespace std;

class CustomStack {
public:
    vector<int> temp;
    int i=0;
    int n = 0;
    CustomStack(int maxSize) {
        temp.resize(maxSize);
        n = maxSize;
    }
    
    void push(int x) {

        if(i>=n){
            return;
        }
        temp[i++] = x;
    }
    
    int pop() {
        if(i <= 0) return -1;
        return temp[--i];

    }
    
    void increment(int k, int val) {
        for(int j=0;(j<k && j<i);j++){
            temp[j]+=val;
        }
    }
};

int main(){
    CustomStack stk = CustomStack(3);
    stk.push(1);
    stk.push(2);
    cout<<stk.pop()<<" ";
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.increment(5,100);
    stk.increment(2,100);
    cout<<stk.pop()<<" ";
    cout<<stk.pop()<<" ";
    cout<<stk.pop()<<" ";
    cout<<stk.pop()<<" ";
    return 0;
}