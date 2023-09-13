#include <iostream>

using namespace std;

// Function to calculate (a^b) % m using modular exponentiation
long long powerModulo(long long a, long long b, long long m)
{
    long long result = 1;
    a = a % m; // Take modulo of a with m to prevent overflow

    while (b > 0)
    {
        if (b & 1)
        { // If b is odd, multiply result with a
            result = (result * a) % m;
        }
        a = (a * a) % m; // Square a
        b >>= 1;         // Right shift b to divide it by 2
    }

    return result;
}

int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        // Calculate the last c digits of a^b
        long long m = 1;
        for (long long i = 0; i < c; i++)
        {
            m *= 10;
        }
        long long result = powerModulo(a, b, m);

        cout << result << endl;
    }
    return 0;
}