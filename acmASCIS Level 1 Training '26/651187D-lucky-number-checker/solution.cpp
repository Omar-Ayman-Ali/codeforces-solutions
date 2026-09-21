#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr1[n];
   
    
    for(int i =0; i < n; i++)
    {
        cin >> arr1[i];
        if (arr1[i] != '6' && arr1[i] != '3' && arr1[i] != '9')
        {   
            cout << "NO";
            return 0;
        }        
 }
         int s=n-1;

  if(arr1[s] == '6') cout << "YES";
    else cout << "NO";
    }
   
   