#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int a,b;
    bool x = false;
    cin >> a>> b;
    for(int i =a+1; i < b; i++)
    {
        if(i % a == 0 and b % i == 0)
            {
                cout << i;
                if(i < b-1)
                cout << ' ';
                x = true;
            }
    }
    if(x == false)
        cout << -1;
}