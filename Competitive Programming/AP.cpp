#include <iostream>
using namespace std;

bool is_arithmetic_progression(int a, int b, int c) {
    // Calculate the common difference
    int d = (b - a) / (c + 1);

    // Check if the common difference is valid
    if (d * (c + 1) != (b - a)) {
        return false;
    }

    // Check if the arithmetic progression is possible
    for (int i = 1; i <= c; i++) {
        if (a + i * d >= b) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if (is_arithmetic_progression(a, b, c)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
