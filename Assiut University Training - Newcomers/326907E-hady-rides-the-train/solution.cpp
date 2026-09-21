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

    ll seet;
    cin >> seet;
    ll row = seet / 4, col;
    if (row % 2 == 0)
        col = seet % 4;
    else
        col = abs(3 - (seet % 4));
    cout << row << ' ' << col << endl;

    return 0;
}