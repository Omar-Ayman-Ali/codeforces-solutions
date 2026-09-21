#include <iostream>
#include <cmath>

using namespace std;
#define int unsigned long long
signed main()
{
    int n, f1;
    cin >> n;
    if (n == 1 || n == 0)
        cout << 1;
    else if (n == 2)
        cout << 2;
    else if (n == 3)
        cout << 6;
    else if (n == 4)
        cout << 4;
    else
        cout << 0;
}