#include <iostream>

using namespace std;

#define int long long
signed main()

{
    int row,col,nRow,nCol;
    char arr1[500][500];
    bool finaldistantion = true;    
    cin >> row >> col;
    
    for(int i=0;i < row ; i++)
        {
            for(int b=0; b < col; b++) cin >> arr1[i][b];
        }
        
            for(int i=0;i < row ; i++)
        {
                for(int b=0; b < col; b++) 
                {
                    if(arr1[i][b] == 'O') arr1[i][b] = '*';
                    if(arr1[i][b] == 'S')
                        { 
                            nRow = i;
                            nCol =b;
                            arr1[i][b] = '.'; 
                            
                        }   
                }
        }
        cout << nRow+1 << ' ' << nCol+1 << endl;
         while(finaldistantion)
            {
                if(arr1[nRow][nCol+1] == '*' and nCol+1 != col )
                    {
                        nCol ++;
                        arr1[nRow][nCol] = '.';                
                        cout << nRow+1 << ' '<< nCol+1 << endl;

                    }
                else if(arr1[nRow+1][nCol] == '*' and nRow +1 != row )
                    {
                        nRow++;
                        arr1[nRow][nCol] = '.';               
                         cout << nRow+1 << ' '<< nCol+1 << endl;

                    }
                else if(arr1[nRow-1][nCol] == '*' and nRow-1 != row)
                    {
                        nRow--;
                        arr1[nRow][nCol] = '.';
                                        cout << nRow+1 << ' '<< nCol+1 << endl;

                    }
                else if( arr1 [nRow][nCol -1] == '*' and nCol-1 != col)
                    {
                        nCol--;
                        arr1[nRow][nCol] = '.';
                        cout << nRow+1 << ' '<< nCol+1 << endl;

                    }
                else finaldistantion = false;                  
            }
}