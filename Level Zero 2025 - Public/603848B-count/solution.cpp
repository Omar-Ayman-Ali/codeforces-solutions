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

    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (q--)
    {
        int l, r, x, cntr = 0;
        cin >> l >> r >> x;
        for (int i = l-1; i < r; i++)
        {
            if (arr[i] == x)
                cntr++;
        }
        cout << cntr << endl;
    }
    return 0;
}