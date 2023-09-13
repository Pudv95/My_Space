#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int t = 0; t < n; t++) {
        int length, window;
        cin >> length >> window;
        int subarrays = ceil((double) length / window);
        vector<vector<int>> array(subarrays);
        int start = 1;
        for(int k = 0; k < window / 2; k++) {
            for(int i = 0; i < subarrays; i++) {
                array[i].push_back(start);
                array[i].push_back(length + 1 - start);
                start += 1;
            }
        }
        if(window & 1) {
            int to_add = 2 * length;
            int to_obtain = 4 * length;
            int sum1 = 0;
            for(int i : array[1]) {
                sum1 += i;
            }
            for(vector<int>& i : array) {
                i[i.size() - 1] = to_add;
                i.push_back(to_obtain - sum1);
                sum1 += 2;
                to_add += 1;
            }
        }
        for(vector<int> j : array) {
            for(int i : j) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
