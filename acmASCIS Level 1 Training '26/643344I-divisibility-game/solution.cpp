#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int n, x, s1, s2;
    s1 = 0;
    s2 = 0;

    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (x % n == 0)
            s1 += x;
        else
            s2 += x;
    }
    if (s1 > s2)
        cout << "3abas";
    else if (s2 > s1)
        cout << "Sultan";
    else
        cout << "TIE";
}