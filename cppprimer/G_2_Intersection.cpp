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

    long l1, l2, r1, r2;

    cin >> l1 >> r1 >> l2 >> r2;
    if (max(l1, l2) > min(r1, r2))
        cout << -1;
    else
        cout << max(l1, l2) << " " << min(r1, r2);
}