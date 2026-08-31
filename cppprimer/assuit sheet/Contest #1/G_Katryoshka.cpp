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

    unsigned long long n, m, k,mn;
    cin >> n >> m >> k;
    if (n == 0 || k == 0)
    {
        cout << 0;
        return 0;
    }
    mn = min({n,m,k});
    n -=mn;
    m -=mn;
    k -=mn;
    mn += min(n /2, k);
    cout << mn;
}