#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int distinct_count = 1;
    for (int i = 1; i < n-1; i++) {
        if (a[i] == a[i+1]) {
            int j = i+2;
            while (j < n && a[j] <= a[i+1]) {
                j++;
            }
            if (j < n) {
                distinct_count++;
                i = j-1;
            }
        } else {
            distinct_count++;
        }
    }
    cout << distinct_count-1 << endl;
    return 0;
}
