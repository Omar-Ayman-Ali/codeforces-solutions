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

    ll n;
    cin >> n;
    if (n == 1)
        cout << 0;
    else
    {
        cout << 0 << ' ' << 1 << ' ';
        ll a = 0, b = 1;
        for (ll i = 0; i < n - 2; i++)
        {
            ll ans = a + b;
            cout << ans << ' ';
            a = b;
            b = ans;
        }
    }

    return 0;
}