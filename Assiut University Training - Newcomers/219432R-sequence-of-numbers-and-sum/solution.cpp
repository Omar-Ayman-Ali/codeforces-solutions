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

    int n, m, total, Min, Max;
    int c = 3;
    while (cin >> n)
    {
        total = 0;
        cin >> m;
        Min = min(n, m);
        Max = max(n, m);
        if (Min <= 0 or Max <= 0)
            break;

        for (int i = Min; i <= Max; i++)
        {
            cout << i << ' ';
            total += i;
        }
        cout << "sum =" << total << endl;
    }
}