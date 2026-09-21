#include <iostream>
using namespace std;

#define int unsigned long long
signed main()
{
    int t, q;
    int counter = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> q;

        while (q % 2 == 0)
        {
            q /= 2;
            counter++;
        }

        if (counter % 2 == 0)
            cout << "First Box\n";
        else
            cout << "Second Box\n";
            counter =0;
    }
}