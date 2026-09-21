#include <iostream>

using namespace std;

signed main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c % a == 0 && c % b == 0)
        cout << "Both";
    else if (c % a == 0)
        cout << "First";
    else if(c % b == 0)
        cout << "Second";
    else 
        cout << "None of them";
}