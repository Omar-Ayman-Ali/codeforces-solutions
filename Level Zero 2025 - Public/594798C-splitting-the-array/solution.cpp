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

    ll x, a;
    cin >> a >> x;
    ll y[a];
    for (ll i = 0; i < a; i++)
        cin >> y[i];
    for (ll i = 0; i < a; i++)
    {
        if (y[i] < x)
            cout << y[i] << ' ';
    }
    for (ll i = 0; i < a; i++)
    {
        if (y[i] > x)
            cout << y[i] << ' ';
    }

    return 0;
}