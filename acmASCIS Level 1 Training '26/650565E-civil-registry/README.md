# [650565E] Civil registry

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/360014664](https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/360014664)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 328 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Civil registry

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/E)
- **Time Limit:** 3 seconds
- **Memory Limit:** 256 megabytes

## Description

On a normal workday, $Mrs. Afaf$ was at her job at the civil registry or as it is more commonly called "السجل المدني".

Suddenly, her boss gave her a simple task. He asked $Mrs. Afaf$ to give him a list of all the possible names that consist of $N$ English lowercase letters. $Mrs. Afaf$ was too lazy to do her job so, she asked you to finish the task for her.

## Input

The first and only line of input contains a single integer $N$, the size of the required names, where $(1 \le N \le 4)$.

## Output

On the first line, output an integer $M$, the number of all possible names of size $N$.

On each of the following $M$ lines, output a single name followed by a new line (you can output the names in any order).

## Examples

### Example 1
**Input:**
```
1
```

**Output:**
```
26
a
b
c
d
e
f
g
h
i
j
k
l
m
n
o
p
q
r
s
t
u
v
w
x
y
z
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;


signed main()
{
    int n;

    cin >> n;
    if(n == 1)
    {
     cout << 26<<endl;
     for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<a<<endl;
        }   
    }
    else if(n == 2)
    {
        cout << 26*26<<endl;
    for(char b= 'a'; b <= 'z'; b++ )
    for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<b<<a<<endl;
        }
    }
    else if(n == 3)
    {
        cout << 26*26*26<<endl;
    for(char z= 'a'; z <= 'z'; z++ )
    for(char b= 'a'; b <= 'z'; b++ )
    for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<z<<b<<a<<endl;
        }
    }
    else if(n == 4)
    {
        cout << 26*26*26*26<<endl;
    for(char m= 'a'; m <= 'z'; m++ )
    for(char z= 'a'; z <= 'z'; z++ )
    for(char b= 'a'; b <= 'z'; b++ )
    for(char a= 'a'; a <= 'z'; a++ )
        {
            cout <<m<<z<<b<<a<<endl;
        }
    }
}
```
