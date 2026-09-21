#include <iostream>

using namespace std;
#define int unsigned long long

signed main()
{

    int n, a, b;
    int d = 0;
    cin >> n >> a >> b;


    if (a >= n)
        cout << 1;
    else if (b >= a)
        cout << -1;
    else
    {
          int net = a - b;
        int days = ( (n - a) + net - 1 ) / net + 1;
        cout << days;
    }   

 }