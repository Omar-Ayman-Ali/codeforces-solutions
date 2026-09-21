# [645756K] Not Quite Latin Square

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/K](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/K)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355908932](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355908932)
- **Rating:** 800
- **Tags:** bitmasks, brute force, implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# K. Not Quite Latin Square

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/K](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/K)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A Latin square is a $3 \times 3$ grid made up of the letters $\texttt{A}$, $\texttt{B}$, and $\texttt{C}$ such that:

- in each row, the letters $\texttt{A}$, $\texttt{B}$, and $\texttt{C}$ each appear once, and
- in each column, the letters $\texttt{A}$, $\texttt{B}$, and $\texttt{C}$ each appear once.
 For example, one possible Latin square is shown below. $$$$\begin{bmatrix} \texttt{A} & \texttt{B} & \texttt{C} \\ \texttt{C} & \texttt{A} & \texttt{B} \\ \texttt{B} & \texttt{C} & \texttt{A} \\ \end{bmatrix}$$

You are given a Latin square, but one of the letters was replaced with a question mark $\texttt{?}$$$. Find the letter that was replaced.

## Input

The first line of the input contains a single integer $t$ ($1 \leq t \leq 108$) — the number of testcases.

Each test case contains three lines, each consisting of three characters, representing the Latin square. Each character is one of $\texttt{A}$, $\texttt{B}$, $\texttt{C}$, or $\texttt{?}$.

Each test case is a Latin square with exactly one of the letters replaced with a question mark $\texttt{?}$.

## Output

For each test case, output the letter that was replaced.

## Examples

### Example 1
**Input:**
```
3
ABC
C?B
BCA
BCA
CA?
ABC
?AB
BCA
ABC
```

**Output:**
```
A
B
C
```

## Note

The correct Latin squares for the three test cases are shown below:

$$\begin{bmatrix} \texttt{A} & \texttt{B} & \texttt{C} \\ \texttt{C} & \color{red}{\texttt{A}} & \texttt{B} \\ \texttt{B} & \texttt{C} & \texttt{A} \\ \end{bmatrix} \quad \begin{bmatrix} \texttt{B} & \texttt{C} & \texttt{A} \\ \texttt{C} & \texttt{A} & \color{red}{\texttt{B}} \\ \texttt{A} & \texttt{B} & \texttt{C} \\ \end{bmatrix} \quad \begin{bmatrix} \color{red}{\texttt{C}} & \texttt{A} & \texttt{B} \\ \texttt{B} & \texttt{C} & \texttt{A} \\ \texttt{A} & \texttt{B} & \texttt{C} \\ \end{bmatrix}$$

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

signed main()
{
    int t, aCounter, bCounter, cCounter;
    char l;
    cin >> t;
    aCounter = 0;
    bCounter = 0;
    cCounter = 0;
    while (t--)
    {
        int i = 9;
        while (i--)
        {
            cin >> l;
            switch (l)
            {
            case 'A':
                aCounter++;
                break;
            case 'B':
                bCounter++;
                break;
            case 'C':
                cCounter++;
                break;
            }
        }
        if (aCounter != 3)
            cout << 'A' << endl;
        else if (bCounter != 3)
            cout << 'B' << endl;
        else
            cout << 'C' << endl;
        aCounter = 0;
        bCounter = 0;
        cCounter = 0;
    }
}
```
