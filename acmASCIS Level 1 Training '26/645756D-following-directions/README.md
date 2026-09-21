# [645756D] Following Directions

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348014340](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348014340)
- **Rating:** 800
- **Tags:** geometry, implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Following Directions

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Alperen is standing at the point $(0,0)$. He is given a string $s$ of length $n$ and performs $n$ moves. The $i$-th move is as follows:

- if $s_i = \texttt{L}$, then move one unit left;
- if $s_i = \texttt{R}$, then move one unit right;
- if $s_i = \texttt{U}$, then move one unit up;
- if $s_i = \texttt{D}$, then move one unit down.
 

![image](https://espresso.codeforces.com/0d5ef1c17b30f18fe6e6fd5173a4885f3a59677d.png)

   If Alperen starts at the center point, he can make the four moves shown.

 There is a candy at $(1,1)$ (that is, one unit above and one unit to the right of Alperen's starting point). You need to determine if Alperen ever passes the candy. 

![image](https://espresso.codeforces.com/e6cdd3512b6505c4d7bb872c7708d10a67d2d745.png)

   Alperen's path in the first test case.

## Input

The first line of the input contains an integer $t$ ($1 \leq t \leq 1000$) — the number of testcases.

The first line of each test case contains an integer $n$ ($1 \leq n \leq 50$) — the length of the string.

The second line of each test case contains a string $s$ of length $n$ consisting of characters $\texttt{L}$, $\texttt{R}$, $\texttt{D}$, and $\texttt{U}$, denoting the moves Alperen makes.

## Output

For each test case, output "YES" (without quotes) if Alperen passes the candy, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

## Examples

### Example 1
**Input:**
```
7
7
UUURDDL
2
UR
8
RRRUUDDD
3
LLL
4
DUUR
5
RUDLL
11
LLLLDDRUDRD
```

**Output:**
```
YES
YES
NO
NO
YES
YES
NO
```

## Note

In the first test case, Alperen follows the path $$$$(0,0) \overset{\texttt{U}}{\to} (0,1) \overset{\texttt{U}}{\to} (0,2) \overset{\texttt{U}}{\to} (0,3) \overset{\texttt{R}}{\to} (1,3) \overset{\texttt{D}}{\to} (1,2) \overset{\texttt{D}}{\to} \color{green}{\mathbf{(1,1)}} \overset{\texttt{L}}{\to} (0,1).$$ Note that Alperen doesn't need to end at the candy's location of $(1,1)$, he just needs to pass it at some point.

In the second test case, Alperen follows the path $$(0,0) \overset{\texttt{U}}{\to} (0,1) \overset{\texttt{R}}{\to} \color{green}{\mathbf{(1,1)}}.$$

In the third test case, Alperen follows the path $$(0,0) \overset{\texttt{R}}{\to} (1,0) \overset{\texttt{R}}{\to} (2,0) \overset{\texttt{R}}{\to} (3,0) \overset{\texttt{U}}{\to} (3,1) \overset{\texttt{U}}{\to} (3,2) \overset{\texttt{D}}{\to} (3,1) \overset{\texttt{D}}{\to} (3,0) \overset{\texttt{D}}{\to} (3,-1).$$

In the fourth test case, Alperen follows the path $$(0,0) \overset{\texttt{L}}{\to} (-1,0) \overset{\texttt{L}}{\to} (-2,0) \overset{\texttt{L}}{\to} (-3,0).$$$$

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
bool tru=false;
 int x=0;
 int y=0;
 int t,n;
char t1;

 cin >> t;
    for(int i =0;i < t; i++)
    {
        cin >> n;
    
        for(int l=0; l< n; l++)
        {
                cin >> t1;
                if(t1 == 'U')
                {
                    y++;
                }
                else if(t1 == 'D')
                {
                    y--;
                }
                else if(t1 == 'R')
                {
                    x++;
                }
                else if(t1 == 'L')
                {
                    x--;
                }
            if( x == 1 and y == 1)
            {
            tru=true;  
                
            }
        
         }
        if(tru == true){cout << "YES"<<endl;
        }else if(tru ==false ){ cout<< "NO"<< endl;
        }
        x=0;
        y=0;
        tru =false;
    
}      
}
```
