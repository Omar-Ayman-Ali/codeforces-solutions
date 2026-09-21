#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int a, k, n;

    cin >> a >> k >> n;
    if ((a * k) % n != 0)
        cout << "double";
    else if ((a * k) / n > 2147483647)
        cout << "long long";
    else
        cout << "int";
}