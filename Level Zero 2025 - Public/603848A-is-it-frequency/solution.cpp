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
    int n, m;
    cin >> n >> m;
    int arr[n];
    int freq[m + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
        cout << freq[i] << endl;
}
int main()
{
    fast;

    solve();

    return 0;
}