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

    double x, y;
    cin >> x >> y;
    int t = 100 - x;
    double b = (100 * y) / t;
    cout << fixed << setprecision(2) << b;
}