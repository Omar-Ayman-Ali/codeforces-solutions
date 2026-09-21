#include <iostream>

using namespace std;

int main()
{
    unsigned long long x,n,m;
    cin >> n >> m >> x;
    

    if(m % 2 != 0)
    {
        m++;
    }
    m = m %n;
    if(x+m > n)
    {
        cout << (x + m) - n;

    }
    else if(x+m < n)
    {
        cout << x+m;
    }
    else if (x+m==n)
    {
        cout << n;
    }
}