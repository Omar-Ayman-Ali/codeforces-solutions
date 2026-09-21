#include <iostream>

using namespace std;


signed main()
{
    int n;

    cin >> n;
    if(n == 1)
    {
     cout << 26<<endl;
     for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<a<<endl;
        }   
    }
    else if(n == 2)
    {
        cout << 26*26<<endl;
    for(char b= 'a'; b <= 'z'; b++ )
    for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<b<<a<<endl;
        }
    }
    else if(n == 3)
    {
        cout << 26*26*26<<endl;
    for(char z= 'a'; z <= 'z'; z++ )
    for(char b= 'a'; b <= 'z'; b++ )
    for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<z<<b<<a<<endl;
        }
    }
    else if(n == 4)
    {
        cout << 26*26*26*26<<endl;
    for(char m= 'a'; m <= 'z'; m++ )
    for(char z= 'a'; z <= 'z'; z++ )
    for(char b= 'a'; b <= 'z'; b++ )
    for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<m<<z<<b<<a<<endl;
        }
    }
}