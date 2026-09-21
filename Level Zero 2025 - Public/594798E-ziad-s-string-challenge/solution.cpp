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

    string x;
    cin >> x;
    bool y = false, e = false, s = false;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == 'Y')
            y = true;
        if (x[i] == 's')
            s = true;
        if (x[i] == 'e')
            e = true;
    }
    if (y && s && e)
        cout << "Ziad eld3eef";
    else
        cout << "Ziad is weak";

            return 0;
}