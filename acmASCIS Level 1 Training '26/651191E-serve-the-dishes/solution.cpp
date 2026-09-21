#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define int long long
signed main ()
{
    int number_Num,n;
    char sortN,sortC;
    cin >> number_Num >> sortN >>sortC;
    int arr1[number_Num];
    char arr2[number_Num+1];
    
    for(int i =0; i < number_Num ; i++) cin >> arr1[i];
    for(int i =0; i < number_Num ; i++) cin >> arr2[i];
        
        for(int i =0; i < number_Num ; i++)
            {
                int x = arr1[i];
                    arr1[i] =0;
            for(int j =0; j < 8; j++ ) 
                {
                
                    int z = x % 10;
                    arr1[i] = arr1[i] + z * pow(2, j);
                    x /=10;
                }
            }
                switch(sortN){
                            case 'A' :
                                sort(arr1, arr1 + number_Num);
                                break;
                            case 'D' :
                                for(int i =0; i < number_Num ; i++) arr1[i] = arr1[i] * -1;
                                sort(arr1, arr1 + number_Num);
                                for(int i =0; i < number_Num ; i++) arr1[i] = arr1[i] * -1;
                                break;
                            }
                switch(sortC)
                {
                    case 'A' :
                        sort(arr2, arr2 + number_Num);
                        break;
                    case 'D' :
                        sort(arr2, arr2 + number_Num ,greater<int>());
                
                    }

                    for(int i =0; i < number_Num ; i++) cout << arr2[i] << arr1[i] << ' ';
                        }