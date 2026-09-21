#include <iostream>
#include <algorithm>

using namespace std;

int main()
    {
        long long arr[3];
        for(int i=0;i<=2;i++){
        cin >> arr[i];
        }
        
        sort(arr, arr + 3);
        for(int n=0;n<=2;n++)
        {
        cout << arr[n]<<endl;
        }

    }