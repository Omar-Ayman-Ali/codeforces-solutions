#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long x;
    cin >> x;
    if (x == 4 or x == 7)
    {
        cout << "NO";
        return 0;
    }
    int cntr =0;
    while (x != 0)
    {
        long long digit = x % 10;
        if (digit == 7 or digit == 4)
            cntr++;
        x /= 10;
    }
    if(cntr == 4 or cntr == 7)
        cout << "YES";
    else 
        cout << "NO";
}