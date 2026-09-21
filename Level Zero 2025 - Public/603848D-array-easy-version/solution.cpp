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

    int n;
    cin >> n;
    int arr[n];
    int sum[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        long long val;
        cin >> val;
        sum[i] = sum[i - 1] + val;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << '\n';
    }

    return 0;
}