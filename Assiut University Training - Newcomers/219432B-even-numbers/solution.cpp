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
    bool x = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
        {
            cout << i << endl;
            x = true;
        }
    if (x)
        return 0;
    else
        cout << -1;
    return 0;
}