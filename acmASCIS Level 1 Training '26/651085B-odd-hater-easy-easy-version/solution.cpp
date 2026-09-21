#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int a, n, sum, minN, maxN;
    cin >> n;
    minN = LLONG_MAX;
    maxN = LLONG_MIN;
    sum = 0;
    while (n--)
    {
        cin >> a;
        if (a % 2 != 0)
            minN = min(a, minN);
        sum += a;
    }
    if (sum % 2 != 0)
        cout << sum - minN;
    else
        cout << sum;
}