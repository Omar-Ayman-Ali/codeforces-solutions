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

    ll x, y;
    cin >> x >> y;
    ll sum1 = x * (x + 1) / 2;
    ll sum2 = y * (y + 1) / 2;

    cout << sum2 - sum1 + x;
    return 0;
}