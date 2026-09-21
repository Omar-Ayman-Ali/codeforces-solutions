#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<long long> vi;

int main()
{
    fast;

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 0)
            cout << 0 << ' ';
        long long x = n;
        while (x > 0)
        {
            long long m = x % 10;
            cout << m << ' ';
            x /= 10;
        }
        cout << endl;
    }
}