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

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, s1 = 0, s2;
        cin >> a;
        s2 = (a * (a + 1) / 2) * (a * (a + 1) / 2);
        s1 = ((a * (a + 1) * (2 * a + 1)) / 6);
        cout
            << s2 - s1 << endl;
    }

    return 0;
}