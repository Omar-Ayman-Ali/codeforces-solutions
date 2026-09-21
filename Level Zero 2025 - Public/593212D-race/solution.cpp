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
        ll a, b, c, d, cntr = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
            cntr++;
        if (a < c)
            cntr++;
        if (a < d)
            cntr++;
        cout << cntr << endl;
    }

    return 0;
}