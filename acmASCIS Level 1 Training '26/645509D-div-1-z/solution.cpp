#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, x, y, z, n;
    cin >> a >> b >> c;
    x = (a + 1) * b * c;
    y = a * (b + 1) * c;
    z = a * b * (c + 1);
    n = a * b * c;

    int p =max(x,y);
    int o = max(z,n);
    int sum = max(p,o);
    
    cout << sum;
}