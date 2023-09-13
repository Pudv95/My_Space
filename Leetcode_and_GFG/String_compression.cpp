#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int pointerOG = 0,i;
    for(i=0;i<chars.size()-1;i++){
        chars[pointerOG] = chars[i];
        pointerOG++;
        if(chars[i] == chars[i+1]){
            int count = 1;
            while((i+1)<chars.size() && chars[i] == chars[i+1]){
                count++;
                i++;
            }
            string countChar = to_string(count);
            for(int k = 0;k < countChar.size(); k++){
                chars[pointerOG] = countChar[k];
                pointerOG++;
            }
        }
    }
    if(i == chars.size()-1){
        return pointerOG+1;
    }
    return pointerOG?pointerOG:1;        
}

int main(){
    int n;
    cin>>n;
    vector<char> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int temp = compress(arr);
    for(int i=0;i<temp;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   