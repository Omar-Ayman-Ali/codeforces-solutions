#include <iostream>
#include <cmath>
using namespace std;

#define int long long

signed main()
{
    int a, b, n, num, aP, bP;
    int m = 0;
    int maxNum = 0;
    int minNum = LONG_LONG_MAX;
    cin >> a >> b >> n;
    aP = 1;
    bP = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (a > num)
            aP++;
        if (b > num)
            bP++;

    
    }
        if (a > b)
            aP++;
        if (b > a)
            bP++;

    cout << aP << ' ' << abs(n + 3 - aP) << endl;
    cout << bP << ' ' << abs(n + 3 - bP);
}
