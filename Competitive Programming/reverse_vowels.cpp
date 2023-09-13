#include <iostream>
#include <string>
using namespace std;

bool yes(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')//capital awle bhi daal
    {
        return true;
    }
    return false;
}

int main()
{
    string s = "Incubator";
    long long i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (!yes(s[i]))
        {
            i++;
        }
        if (!yes(s[j]))
        {
            j--;
        }
        if (yes(s[i]) && yes(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    cout << s;

    return 0;
}
