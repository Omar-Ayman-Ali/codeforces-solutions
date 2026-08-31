#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll total_sum = n *(n + 1) / 2;
        ll pSum = 0;
        for (ll i = 1; i <= n; i *= 2)
            pSum += i;
        ll ans = total_sum - 2*pSum;
        cout << ans << endl;
    }
}