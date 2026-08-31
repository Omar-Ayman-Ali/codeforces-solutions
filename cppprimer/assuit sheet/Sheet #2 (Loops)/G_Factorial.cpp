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

    long long t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, x = 1;
        cin >> n;
        if (n == 0)
            {
                cout << 1 << endl;
                continue;
            }
        else
            for (int i = 1; i <= n; i++)
                x *= i;

        cout << x << endl;
    }

    return 0;
}