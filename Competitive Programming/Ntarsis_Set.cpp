#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        priority_queue<int, vector<int>, greater<int>> pq; // Min-heap

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            pq.push(num);
        }

        while (k--) {
            pq.pop(); // Remove the smallest k elements
        }

        cout << pq.top() << "\n";
    }

    return 0;
}
