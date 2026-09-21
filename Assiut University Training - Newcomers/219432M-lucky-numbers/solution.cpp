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

    int a, b;
    bool x = false;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int m = i;
        bool checked = true;
        while (m > 0)
        {
            if (m % 10 != 4 && m % 10 != 7)
            {
                checked = false;
                break;
            }
            m /= 10;
        }
        if (checked)
        {
            cout << i << ' ';
            x = true;
        }
    }
    if (!x)
        cout << -1;
}