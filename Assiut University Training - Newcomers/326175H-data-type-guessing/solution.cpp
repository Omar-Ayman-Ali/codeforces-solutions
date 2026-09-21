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

    long long a, k, n, c;
    cin >> a >> k >> n;

    if (((a * k) % n) != 0)
        cout << "double";
    else if (((a * k) / n) > INT_MAX)
        cout << "long long";
    else
        cout << "int";
    return 0;
}