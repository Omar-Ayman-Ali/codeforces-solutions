#include <iostream>


using namespace std;

int main()
    {
        char x,y,z;
        cin>> x>> y>> z;
        if(y == '<' and x < z)
        {   
            cout << "YES";
        }
        else if(y == '>' and x > z)
        {   
            cout << "YES";
        }
        else if(y == '=' and x == z)
        {   
            cout << "YES";
        }
        else 
        {
            cout << "NO";
        }
    }