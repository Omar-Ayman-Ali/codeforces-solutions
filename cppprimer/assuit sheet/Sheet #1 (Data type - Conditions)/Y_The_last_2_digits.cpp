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

    unsigned long long x, y, z, i, sum = 0;
    cin >> x >> y >> z >> i;
    sum = x % 100 * y % 100 * z % 100 * i % 100;
    if(sum < 10)
        cout << 0;
    cout << sum;
}