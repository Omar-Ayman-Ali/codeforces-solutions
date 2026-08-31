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
    while (t--)
    {
        int n, counter = 0;
        cin >> n;
        char c[n];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        for (int i = 0; i < n; i++)
        {
            if (c[i] == c[i + 1] && i < n)
                counter;
        }
        cout << counter << endl;
    }
}