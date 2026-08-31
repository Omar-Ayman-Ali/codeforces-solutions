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

    ll a, x;
    cin >> a >> x;
    ll n[a];
    for (int i = 0; i < a; i++)
        cin >> n[i];
    reverse(n + x, n + a);
    for (int i = 0; i < a; i++)
        cout << n[i] << ' ';

    return 0;
}