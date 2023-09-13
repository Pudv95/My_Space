#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        // Check if any frequency is greater than (n+1)/2
        bool flag = true;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (it->second > (n+1)/2) {
                flag = false;
                break;
            }
        }

        // Print the result
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
