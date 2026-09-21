#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double pi = 3.141592653;
    double r;
    cin >> r;
    cout <<fixed<<setprecision(9)<< r*r*pi;
}