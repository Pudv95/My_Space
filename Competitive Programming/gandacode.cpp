#include <iostream>
using namespace std;

#define ull unsigned long long int 

ull reverseNumber(int num)
{
    ull reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(ull num)
{
    ull reversed = reverseNumber(num);
    return (reversed == num);
}

ull countPalindromePairs(ull arr[], ull n)
{
    ull count = 0;

    for (ull i = 0; i < n; i++)
    {
        for (ull j = i; j < n; j++)
        {
            ull xorResult = arr[i] ^ arr[j];
            if (isPalindrome(xorResult))
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    ull t;
    cin >> t;

    while (t--)
    {
        ull n;
        cin >> n;

        ull arr[n];
        for (ull i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ull result = countPalindromePairs(arr, n);
        cout << result << endl;
    }

    return 0;
}