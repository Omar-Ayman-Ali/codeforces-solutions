#include <iostream>

using namespace std;

int main()
{
    
    int numberSoldiers;
    cin >> numberSoldiers;
    long arr1[10000];
    

    for(int i =0; i < numberSoldiers ; i++)
    {
        cin >> arr1[i];
    }

    for(int i =0; i < numberSoldiers ; i++)
    {   
       long m =0;
        for(int b =0; b < numberSoldiers; b++)
        {
            if(arr1[i] > arr1[b])m++;
        }
        cout << m << ' ';
    }       

    
}