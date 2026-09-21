#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, t;
    cin >> n >> t;

    ll arr[n];

    map<ll, ll> mp; // value -> position

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;

        arr[i] = t - x; // complement

        mp[x] = i + 1;  // position
    }

    for (ll i = 0; i < n; i++) {
        if (mp[arr[i]]) {
            ll pos = mp[arr[i]];

            if (pos != i + 1) {
                cout << min(i + 1, pos) << " "
                     << max(i + 1, pos) << "\n";
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << "\n";

    return 0;
}