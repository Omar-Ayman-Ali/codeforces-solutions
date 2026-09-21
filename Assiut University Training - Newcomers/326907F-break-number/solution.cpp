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

    ll n;
    cin >> n;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        ll value, cntr = 0;

        cin >> value;
        while (value > 0)
        {
            if (value % 2 == 0)
            {
                value /= 2;
                cntr++;
            }
            else
            {
                break;
            }
        }
        if (cntr > result)
        {
            result = cntr;
            cntr = 0;
        }
    }
    cout << result;
}