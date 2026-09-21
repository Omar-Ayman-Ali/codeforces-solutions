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

    ll n;
    cin >> n;
    ll arr[n];
    ll sum[n + 1] = {0};
    for (ll i = 1; i <= n; i++)
    {
        long long val;
        cin >> val;
        sum[i] = sum[i - 1] + val;
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << '\n';
    }

    return 0;
}