#include <iostream>
using namespace std;
int main()
{
    double d, n;
    int x;
    cin >> d >> n;
    double z = n;
    n = d / n;
    x = n;
    cout << "floor " << d << " / " << z << " = " << x << '\n';
    if (n - x == 0)
        cout << "ceil " << d << " / " << z << " = " << x << '\n';
    else
        cout << "ceil " << d << " / " << z << " = " << x + 1 << '\n';

    if (n - x >= 0.5)
        cout << "round " << d << " / " << z << " = " << x + 1 << '\n';
    else
        cout << "round " << d << " / " << z << " = " << x << '\n';
}