#include <iostream>

using namespace std;

int main()
{   
    float d,s;
    cin >> d>>s;
    if(s>=(d*2)/3)
    {
        cout << "Sunny Day";    
    }
    else if(s<=(d*1)/3)
    {
        cout << "Rainy Day";      
    }
    else
    {
        cout << "Cloudy Day";      

    }
}