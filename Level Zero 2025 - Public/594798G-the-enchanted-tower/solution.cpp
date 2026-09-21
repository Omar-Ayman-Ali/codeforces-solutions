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

    unsigned long long n, x;
    cin >> n >> x;
    if (n >= x && (n - x) % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}