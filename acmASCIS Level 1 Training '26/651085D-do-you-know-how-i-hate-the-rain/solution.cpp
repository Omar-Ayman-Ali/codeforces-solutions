#include <iostream>

using namespace std;
#define int long long
signed main()
{
    int x, y, n;
    char r;
    cin >> x >> y >> n >> r;

     n = n % 4;
    if (n == 0 )
        cout << x << ' ' << y;
    else
    {
        switch (r)
        {

        case 'A':
            if (n == 1)
            {
                swap(x, y);
                x *= -1;
            }
            else if (n == 2)
            {
               
                x *= -1;
                y *= -1;
            }
            else if (n == 3 )
            {
                swap(x, y);
                y *= -1;
            }

            break;

        case 'C':
            if (n == 1)
            {
                swap(x, y);
                y *= -1;
            }
            else if (n == 2 )
            {
 
                x *= -1;
                y *= -1;
            }
            else if (n == 3 )
            {
                swap(x, y);
                x *= -1;
            }
            break;
        }
        cout << x << ' ' << y;
    }
}