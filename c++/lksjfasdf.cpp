#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    // int n = 0;
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < (10 - i - 1); j++){
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
            cout<<j<<endl;
        }
        break;
    }
    // for(int i = 0 ; i < 10 ; i++){
    //     cout << arr[i] << endl;
    // }
    return 0;
}