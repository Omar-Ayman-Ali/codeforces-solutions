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

    int n, k, mn, x, cntr = 0;
    bool z = false;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!z)
        {
            z = true;
            mn = x;
        }
        else
        {
            mn = min(mn, x);
        }
        cntr++;
        if (cntr == k || i == n - 1)
        {
            cout << mn << ' ';
            cntr = 0;
            z = false;
        }
    }
}