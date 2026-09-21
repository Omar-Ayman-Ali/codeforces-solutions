#include <iostream>

using namespace std;

int main()
{
    long long x, y, x1, y1;
    cin >> x >> y;
    if (x > 9)
        x1 = x % 10;
    if (y > 9)
        y1 = y % 10;
    cout << y1 + x1;
}