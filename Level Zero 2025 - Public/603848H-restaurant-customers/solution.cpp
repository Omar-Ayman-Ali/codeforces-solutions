#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;
int frq[1000001] = {};

int main()
{
    fast;
    int n, mx;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        frq[a]++;
        frq[b + 1]--;
    }
    for (int i = 1; i <= 1000001; i++)
        frq[i] += frq[i - 1];
    cout << *max_element(frq, frq + 1000001) << '\n';

    return 0;
}