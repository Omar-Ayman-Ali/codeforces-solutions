#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    int x, z, y = 0;
    cin >> x;
    z = x;
    while (z > 0)
    {
        int m = z % 10;

        y = y * 10 + m;
        z /= 10;
    }
    if (y == x)
        cout << y << endl
             << "YES";
    else
        cout << y << endl
             << "NO";

    return 0;
}