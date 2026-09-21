#include <iostream>
using namespace std;

int main()
{
    int numberChar;
    cin >> numberChar;
    
    char arrChar[numberChar];
    for(int i = 0; i < numberChar; i++)
        cin >> arrChar[i];

    int m = 0;
    for(int i = 0, j = numberChar - 1; i < j; i++, j--)
    {
        if(arrChar[i] == arrChar[j]) m++;
    }
    for(int j =numberChar-1; j>=0;j-- )
   {
   	
   	cout<<arrChar[j];
   	}

		cout << endl;

    if(m == numberChar / 2)
        cout << "YES";
    else
        cout << "NO";
}