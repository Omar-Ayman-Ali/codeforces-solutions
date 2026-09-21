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
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll maxcntr = 0;
    ll minNum = *min_element(arr, arr + n);
    for (ll i = 0; i < n; i++)
    {
        maxcntr += arr[i] - minNum;
    }
    cout << maxcntr << endl;
}
int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}