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

    long long n, a, b, total = 0, x = 0;
    cin >> n >> a >> b;
    if (a == b or a - b == abs(1))
       {
        cout << 0; return 0;
       }
    for (int i = a ; i <= n; i++)
    {
        long long m = i;
        total = 0;
        while (m > 0)
        {
            long long y = m % 10;
            total += y;
            m /= 10;
        }
        if (total <= max(b,a) && total >= min(a,b))
        {
            x += i;
        }
    }
    cout << x;
}