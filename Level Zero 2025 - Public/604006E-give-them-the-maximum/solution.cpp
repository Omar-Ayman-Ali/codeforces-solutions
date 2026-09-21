#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    for (ll i = 0; i < q; i++)
    {
        ll l, r, sum = 0;
        cin >> l >> r;
        for (ll j = l ; j <= r; j++)
        {
            sum += arr[j-1];
        }
        cout << sum << endl;
    }
}

int main()
{
    fast;
    solve();
    return 0;
}