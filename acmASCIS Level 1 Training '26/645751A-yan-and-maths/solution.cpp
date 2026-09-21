#include <iostream>


using namespace std;

int main ()
{
    long long  n;
    cin >> n;
        int a = 0, b = 0, c;
    while(n > 0)
    {
         c = n % 10;
        if(c % 2 == 0)
        {
            a++;
        }
        else if (c % 2 != 0)
        {
        b++;
        }
     n = n / 10;
    }

    cout << "Even : " <<a<<endl;
    
    cout << "Odd : " <<b<<endl;

}