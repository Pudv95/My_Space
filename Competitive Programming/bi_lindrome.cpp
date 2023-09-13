#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        set<char> temp;
        for (int i = 0; i < a; i++)
        {
            char o;
            cin>>o;
            temp.insert(o);
        }
        if(temp.size()<a){
            cout<<a-2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
    
return 0;
}
