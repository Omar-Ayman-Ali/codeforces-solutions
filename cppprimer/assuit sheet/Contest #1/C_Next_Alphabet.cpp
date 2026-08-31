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

    char c;
    cin >> c;
    if (c == 'z')
        cout << 'a';
    else
    {
        int x = c;
        x++;
        c= x;
        cout << c;
    }
    return 0;
}