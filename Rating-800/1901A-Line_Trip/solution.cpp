#include <iostream>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int cntr = 1, max_cntr = cntr;

        cin >> n >> x;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = a[0];
        for (int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[i - 1]);
        ans = max(ans, 2 * (x - a[n - 1]));
        cout << ans << endl;
    }
}