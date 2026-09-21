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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 3 == 0)
            cout << n / 3 << ' ' << n / 3 << '\n';
        else if (n % 3 == 1)
            cout << (n / 3) + 1 << ' ' << n / 3 << '\n';
        else
            cout << n / 3 << ' ' << (n / 3) + 1 << '\n';
    }

    return 0;
}