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

    ll n, sum = 0;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << n / -2 - 1;
}