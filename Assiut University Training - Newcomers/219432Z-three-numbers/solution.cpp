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

    ll k, s, c = 0;
    cin >> k >> s;

    for (ll i = 0; i <= k; i++)
        for (ll j = 0; j <= k; j++)
        {
            if (s - i - j >= 0 && s - i - j <= k)
                c++;
        }
    cout << c;
    return 0;
}