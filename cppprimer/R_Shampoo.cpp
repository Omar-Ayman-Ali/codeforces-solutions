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

    int v, f, m, t;
    cin >> v >> f >> m >> t;

    int rem = v % (f + m + t);
    if (rem < f)
        cout << "F";
    else if (rem < f + m)
        cout << "M";
    else
        cout << "T";

    return 0;
}