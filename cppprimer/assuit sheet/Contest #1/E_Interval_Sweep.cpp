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

    int x, y;
    cin >> x >> y;
    if (x == 0 and y == 0)
        cout << "NO";
    else if (x - y == 1 or y - x == 1 or x == y)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}