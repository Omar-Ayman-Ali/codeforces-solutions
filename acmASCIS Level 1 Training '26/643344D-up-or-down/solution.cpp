#include <iostream>
#include <cmath>

using namespace std;
#define int long long
signed main()
{
    int n, s;
    cin >> n;
    s = sqrt(n);
    if (s * s == n)
        cout << "Face up.";
    else
        cout << "Face down.";
}