#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

const int mx = 2000005;
int freq[mx] = {};
int passed[mx] = {};
int prefix_sum[mx] = {};

int main()
{
    fast;

    int n, k, q;
    if (!(cin >> n >> k >> q))
        return 0;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    for (int i = 1; i < mx; i++)
        freq[i] += freq[i - 1];

    for (int i = 1; i < mx; i++)
        if (freq[i] >= k)
            passed[i] = 1;

    for (int i = 1; i < mx; i++)
        prefix_sum[i] = passed[i] + prefix_sum[i - 1];

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << '\n';
    }
    return 0;
}