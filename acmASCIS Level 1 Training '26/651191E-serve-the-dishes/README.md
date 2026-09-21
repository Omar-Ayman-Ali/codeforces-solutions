# [651191E] Serve the Dishes

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351056671](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351056671)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Serve the Dishes

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Once again there's a problem facing our friends in $La\, Ratatouille$. Since the restaurant was gaining fame and becoming each day busier than the one before, $Remy$ decided to hire new waiters.

It wasn't easy since the way they served the orders to the tables was made by $Linguini$ and he's not good at teaching others stuff. So he decided that it will be easier if they also made another change and had a program that tells the waiters the order by which the dishes are served.

Food on the menu and on the recipe cards was written in binary, but when a card is put next to a dish it should be written in decimal. The numbering of the tables in the restaurant was in lowercase English letters. The serving of the dishes to the tables always has a certain order. Sometimes the dishes may be served in ascending order, and in another in descending order. The same applies on the tables, they either are served in ascending or descending order.

The following information will be given to the program from $Linguini$:

- The $N$ dishes that were ordered.

- A string containing the tables that placed an order.

- He will also give you the arrangement in which the dishes shall be served to the tables.

Help him by making a program that assigns the correct dish to the corresponding table and also in the arrangement in which this dish should be served to that table.

## Input

First line contains an integer and two characters $N, a \, $and$ \, b, (1 \leq N \leq 1000), a \, $and$\, b \in \{A, D\}\, -$ $A$ for ascending order, and $D$ for descending order. The first character $a$ describes the arrangement of the dishes, and $b$ describes the arrangement of the tables.

In the following $N$ lines you'll be given a binary number per line of $8$ bits.

In the $N+1$ line you'll be given a string $S$ of $N$ character consisting of lowercase English letters.

## Output

Print $N$ combinations of a letter with a decimal number. The $i_{th}$ combination should describe the $i_{th}$ table that should be served with the ordered dish$, (1 \leq i \leq N)$.

## Examples

### Example 1
**Input:**
```
4 A A
00000011
00000101
00000001
00000110
acdb
```

**Output:**
```
a1 b3 c5 d6
```

## Note

Explanation of the sample:

There are $4$ dishes ordered by $4$ tables. The dishes are arranged in ascending order. The tables are arranged in ascending order.

The ordered dishes are:

$00000011 = 3$

$00000101 = 5$

$00000001 = 1$

$00000110 = 6$

Since the tables and the dishes are in ascending order, hence the $1^{st}$ table is table $\{a\}$ and its order is dish number $1,$ the $2^{nd}$ table is table $\{b\}$ and its order is dish number $3,$ the $3^{rd}$ table is table $\{c\}$ and its order is dish number $5,$ and the $4^{th}$ table is table $\{d\}$ and its order is dish number $6$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
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
```
