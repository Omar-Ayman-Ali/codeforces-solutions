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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0, sum = 0;
    cin >> n;
        while (n > 0)
        {
            if (n % 2 != 0)
                c++;
            n /= 2;
        }

        for (int i = 0; i < c; i++)
        {
            sum += pow(2, i);
        }
        cout << sum << endl;
    }

    return 0;
}