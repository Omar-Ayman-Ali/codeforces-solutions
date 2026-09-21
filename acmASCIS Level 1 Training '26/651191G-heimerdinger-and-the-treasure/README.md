# [651191G] Heimerdinger and The Treasure

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/G](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/G)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351054577](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351054577)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# G. Heimerdinger and The Treasure

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/G](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/G)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

Heimerdinger is the smartest scientist in Bandle city, he loves doing research and scientific experiments, unfortunately he ran out of money, he heard that captain gangplank buried his treasure in shurima and he was able to get a map that shows the direction to the treasure. As we all know heimerdinger is busy fighting in the summoners rift, so he built a robot that will retrieve the treasure for him. the robot will be sent to shurima by plane and will be dropped at location S then it will follow the coordinates heimerdinger will give it. Heimerdinger asked for your help. he wants to give you the map and then you should write on the computer the required coordinates.

The map cells numbered from 1 to N starting from the Top, and from 1 to M starting from the Left

## Input

The first line contains 2 integers N (1 ≤ N ≤ 500) , M (1 ≤ M ≤ 500).

The next N lines each contain M characters ( '*' , 'O' , '.' ,'S').

'*' indicates a step.

'.' indicates the desert.

'O' indicates the treasure location.

'S' indicates the start location.

## Output

Print the coordinates from the starting point to the treasure location.

## Examples

### Example 1
**Input:**
```
5 5
.....
..O..
..*..
..*..
..S..
```

**Output:**
```
5 3
4 3
3 3
2 3
```

## Note

Each step has at most 2 adjacent step cells.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
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
```
