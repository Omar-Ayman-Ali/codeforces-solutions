#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>> x;
    y = x%10;
    z = x /10 %10;
    cout << y+z;

}