#include <iostream>
 
    using namespace std;
 
    int main()
    {
        int k,x,a,y,b;
        cin >> k>> x>> a>> y>> b;
       
        if(k>=x+y)
        {
            cout << b+a;
        }
        else if(k>=x && k>=y  )
        {
            cout << max(a,b);
        }
        else if (k>=x)
        {
         cout << a;         
        }
        else if (k>=y)
        {
        cout << b;         
        }
        else
        {
            cout <<0;
        }
    }