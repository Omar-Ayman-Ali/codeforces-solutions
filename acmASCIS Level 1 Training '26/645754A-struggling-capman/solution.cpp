#include <iostream>

using namespace std;

int main()
{
    long long n,t;
    long long b = 1;
    cin >> n;
    for(int i=0; i<n ; i++)
    {
        cin >> t;
        if(t >= b)
        {
            b =t;
        }
    }
    cout << b;
}