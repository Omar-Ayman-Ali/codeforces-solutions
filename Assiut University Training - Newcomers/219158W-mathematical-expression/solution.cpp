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

    long long x, y, z, o;
    char s, q;
    bool cas = false;
    cin >> x >> s >> y >> q >> z;

    if (s == '+')
        o = 1;
    else if (s == '-')
        o = 2;
    else if (s == '*')
        o = 3;
    if (s == '+' && (x + y) == z)
        cout << "Yes";

    else if (s == '*' && (x * y) == z)
        cout << "Yes";
    else if (s == '-' && (x - y) == z)
        cout << "Yes";
    else if (o == 1)
        cout << x + y;
    else if (o == 2)
        cout << x - y;
    else
        cout << x * y;
}