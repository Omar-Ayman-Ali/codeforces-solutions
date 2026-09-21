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
    int n;
    cin >> n;
    cout << 3 << endl
         << -5 * n << ' ' << 0 << ' ' << 2 * n;
}
int main()
{
    fast;
    solve();
    return 0;
}