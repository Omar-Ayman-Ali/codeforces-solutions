#include <iostream>

using namespace std;

signed main()
{
    int t, aCounter, bCounter, cCounter;
    char l;
    cin >> t;
    aCounter = 0;
    bCounter = 0;
    cCounter = 0;
    while (t--)
    {
        int i = 9;
        while (i--)
        {
            cin >> l;
            switch (l)
            {
            case 'A':
                aCounter++;
                break;
            case 'B':
                bCounter++;
                break;
            case 'C':
                cCounter++;
                break;
            }
        }
        if (aCounter != 3)
            cout << 'A' << endl;
        else if (bCounter != 3)
            cout << 'B' << endl;
        else
            cout << 'C' << endl;
        aCounter = 0;
        bCounter = 0;
        cCounter = 0;
    }
}