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
    bool x = false;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i + 2 < n; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2])
            x = true;
    }
    if (x)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    fast;
    solve();
    return 0;
}