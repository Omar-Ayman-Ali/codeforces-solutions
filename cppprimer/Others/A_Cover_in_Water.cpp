#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cntr = 0;
        cin >> n;
        char x[n];
        for (int i = 0; i < n; i++)
            cin >> x[i];
        bool y = false;

        for (int i = 0; i < n; i++)
        {
            if (x[i] == '.' && i + 1 < n && x[i + 1] == '.' && i + 2 < n && x[i + 2] == '.')
            {
                y = true;
                break;
            }
             if (x[i] == '.')
                cntr++;
        }
        if (y)
            cout << 2 << endl;
        else
            cout << cntr << endl;
    }
}