#include <iostream>

using namespace std;

int main()
{
    int n;
    long long l,r,sum1,sum2;
    cin >>n;
    
    for(int x =0; x < n; x++)
    {
    cin >> l >> r;
                
        sum1 = (l * (l + 1) / 2)-l;
        sum2 = r * (r + 1) / 2;

        cout << sum2-sum1 << endl;
    }
}