#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
if(x % 5 != 0)
    {
        cout << x/5+1;
        return 0;
    }
    cout << x/5;

}