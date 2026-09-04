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

    ll a, b, c;
    cin >> a >> b >> c;
    ll x, y, z;
    x = max({a, b, c});
    z = min({a, b, c});
    y = a + b + c - x - z;
    if (y + z > x)
        cout << 0;
    else
        cout << x - (z + y) + 1;

    return 0;
}