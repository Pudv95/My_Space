#include<bits/stdc++.h>
using namespace std;

class SnapshotArray {
public:
    int snap_id = 0,len = 0; 
    map<int,vector<int>> snap1;
    vector<int> arr(len);
    SnapshotArray(int length) {
        len=length;
    }
    void set(int index, int val) {
        arr[index] = val;
    }
    int snap() {
        snap_id++;
        snap1[snap_id-1] = arr;
        return snap_id;
    }
    
    int get(int index, int snap_id) {
        return snap1[snap_id][index];
    }
};


int main(){
    
    return 0;
}