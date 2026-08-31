#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

bool check(int x, int y, int z)
{
    if (x + y >= 10)
        return true;
    else if (x + z >= 10)
        return true;
    else if (y + z >= 10)
        return true;
    return false;
}
int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (check(x, y, z) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}