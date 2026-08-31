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
    int n, m;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                n = i;
                m = j;
            }
        }
    int cntr = 0;
    if (n > 2)
        cntr += n - 2;
    else if (n < 2)
        cntr += 2 - n;
    if (m > 2)
        cntr += m - 2;
    else if (m < 2)
        cntr += 2 - m;
    cout << cntr;
}