#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int seg(int i, int a[])
{
    for (int j = 0; j < i; j++)
        cin >> a[j];
    int cntr = 0;
    int m = cntr;
    for (int j = 0; j < i; j++)
    {
        if (a[j] == 0)
            cntr++;
        else
        {
            cntr = 0;
        }
        m = max(cntr, m);
    }
    return m;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        cin >> i;
        int a[i];
        int x = seg(i, a);
        cout << x << endl;
    }

    return 0;
}