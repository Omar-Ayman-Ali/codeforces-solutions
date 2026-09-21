#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll cntr = 0, m = 0;
        string x;
        cin >> x;
        ll i = 0;
        while (i < x.length())
        {
            while (x[i] == '1')
            {
                cntr++;
                i++;
            }
            m = max(m, cntr);
            cntr = 0;
            i++;
        }
        cout << m << '\n';
    }

    return 0;
}
