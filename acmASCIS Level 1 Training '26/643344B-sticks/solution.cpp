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
    long long x, y, z;
    cin >> x >> y >> z;
    if (x + y > z && y + z > x && x + z > y)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}