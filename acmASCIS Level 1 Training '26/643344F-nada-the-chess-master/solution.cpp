#include <iostream>
#include <cmath>

using namespace std;

signed main()
{
    int row,col,sum;
    char c,r;
    cin >> c>> r;

    col = c - 'a' + 1; 
    row = r - '0';

    sum = min(8 - row, 8 - col) +min(8 - row, col - 1)+min(row - 1, 8 - col)+min(row - 1, col - 1);

    cout << sum;
}