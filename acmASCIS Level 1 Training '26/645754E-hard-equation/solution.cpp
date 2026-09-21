#include <iostream>

using namespace std;
#define int long long
signed main()
// W+ 2X2+ 3Y3+ 4Z4
{
    int t, n;
    int counter = 0;
    cin >> t;
    while (t--)
    {

        cin >> n;

        for (int z = 0; z * z * z * z <= n; z++)
            for (int y = 0; y * y * y <= n; y++)
                for (int x = 0; x * x <= n; x++)
                    if ((2 * x * x + y * y * y * 3 + z * z * z * z * 4) <= n)
                        counter++;

        cout << counter << endl;
        counter = 0;
    }
}