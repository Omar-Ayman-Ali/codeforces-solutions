#include <iostream>

using namespace std;

int main()
{
    long long id;
    cin >> id;
    long long  y =0;
    long long x =0;
    long long z =id;
    long long a =0;
    long long  n =id;
    long long b = 0;
    while(n>0)
    {
        x = n %10;
        y = y * 10 +x;
        n = n /10;
    }
     while(z>0)
     {
        x = z % 10;
        a = a+x; 
        z = z /10;
     }   
     b = id %a;   
     if(id == y and b == 0)
        {
            cout << "Best mentor.";
        }
        else if (id != y and b == 0 or id == y and b != 0 )
        {
            cout << "He's good.";
        }
        else if(id != y and b != 0)
        {
            cout << "He'll be fired.";
        }
        }