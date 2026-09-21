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

    int x, y, t;

    cin >> t;
    while (t--)
    {
        int total = 0;
        cin >> x >> y;
        for (int i = min(x,y) +1; i < max(x,y); i++)
            if (i % 2 != 0)
                total += i;
        cout << total << endl;
    }
}