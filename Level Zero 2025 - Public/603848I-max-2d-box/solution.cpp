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
    
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll arr[n + 1][m + 1] = {}, frq[n + 1][m + 1] = {};

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            frq[i][j] = arr[i][j] + frq[i - 1][j] + frq[i][j - 1] - frq[i - 1][j - 1];
        }
    ll mx = LLONG_MIN;
    for (int i = 1; i <= n - x + 1; i++)
        for (int j = 1; j <= m - y + 1; j++)
        {
            int i2 = i + x - 1, j2 = j + y - 1;
            ll crnt = 0;
            crnt = frq[i2][j2] - frq[i - 1][j2] - frq[i2][j - 1] + frq[i - 1][j - 1];
            mx = max(mx, crnt);
        }
    cout << mx;
    return 0;
}