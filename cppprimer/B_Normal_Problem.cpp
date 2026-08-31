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
        string x;
        cin >> x;
        reverse(x.begin(), x.end());
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == 'q')
                x[i] = 'p';
            else if (x[i] == 'p')
                x[i] = 'q';
        }
        cout << x << endl;
    }

    return 0;
}