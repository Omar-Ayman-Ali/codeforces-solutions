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
        ll x;
        cin >> x;
        if (x >= 1900)
            cout << "Division 1" << endl;
        else if (x >= 1600)
            cout << "Division 2" << endl;

        else if (x >= 1400)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }

    return 0;
}