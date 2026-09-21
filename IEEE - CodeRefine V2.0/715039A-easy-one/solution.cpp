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

    unsigned long long a, b;
    cin >> a >> b;

    if ((a + b) % 2 == 0)
        cout << "Even.";
    else
        cout << "Odd.";

    return 0;
}