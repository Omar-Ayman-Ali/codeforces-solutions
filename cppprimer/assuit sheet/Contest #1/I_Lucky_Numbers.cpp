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

    int x;
    cin >> x;
    int y = x % 10;
    x /= 10;
    int z = x % 10;
    if (y == 0)
        cout << "YES";
    else if (z % y == 0 or y % z == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}