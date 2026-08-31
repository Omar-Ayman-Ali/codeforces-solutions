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

    unsigned long long a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
        cout << "Both";
    else if (a % k == 0 && b % k != 0)
        cout << "Memo";
    else if (a % k != 0 && b % k == 0)
        cout << "Momo";
    else 
        cout <<"No One";
}