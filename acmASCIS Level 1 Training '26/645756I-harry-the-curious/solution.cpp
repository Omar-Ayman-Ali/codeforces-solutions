#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int l, r, n;
    bool checker = false;
    cin >> l >> r >> n;

    for (int i = l; i <= r; i++)
    {
        if (i < 2) continue; 

        bool is_prime = true;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime && n % i == 0)
        {
            cout << i << ' ';
            checker = true;
        }
    }
    
    if (!   checker)
        cout << -1;
}