#include <iostream>

using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;

    long long xr, yr, xw, yw;
    cin >> xr >> yr >> xw >> yw;

    long long dist_russo = (xr * xr) + (yr * yr);
    long long dist_wil = (xw * xw) + (yw * yw);

    if (dist_russo < dist_wil)
        cout << "Russo\n";
    else if (dist_wil < dist_russo)
        cout << "Wil\n";
    else
        cout << "Empate\n";

    return 0;
}