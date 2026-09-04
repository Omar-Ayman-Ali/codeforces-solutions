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
    int n, max_cntr = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool state = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 1 && i < n - 1)
        {
            max_cntr += 5;
            state = true;
        }
        else if (arr[i] == 1)
        {
            max_cntr++;
            state = true;
        }

        else if (arr[i] == 0 && arr[i + 1] == 0 && i < n - 1)
        {
            state = false;
            break;
        }
    }
    if (state)
        cout << max_cntr << endl;
    else
        cout << -1 << endl;
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