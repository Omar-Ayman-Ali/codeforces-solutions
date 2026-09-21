#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define int double
signed main()
{
    int l,diagonal;
    cin >> l;
    diagonal = l/2;
    int radius = diagonal * sqrt(2);

    cout <<fixed<< setprecision(4)<<radius;
}