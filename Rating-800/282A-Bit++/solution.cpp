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

    int t;
    cin >> t;
    string x;
    int i = 0;
    while (t--)
    {
        cin >> x;
        if (x == "X++" || x == "++X")
            i++;
        else
            i--;
    }
    cout << i;
    return 0;
}