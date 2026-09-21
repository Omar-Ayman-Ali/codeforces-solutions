# [645756J] Cards

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/J](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/J)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355903838](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355903838)
- **Rating:** Unrated
- **Tags:** constructive algorithms, implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# J. Cards

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/J](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/J)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

Omar has a deck of cards. Every card has a unique integer number written on it. He says that his cards are numbered starting from 1, and if a card with number *N* exists, then a card with number *N* + 1 exists. Yes he may have an infinite sequence !

Yesterday when he went to school, his little brother Samir played with his cards by sorting them into two boxes according to the numbers written on them by repeating the following two steps:

1. Take the card with the smallest number, let it be *X*.
2. Put the card with number *X* in the first box and put the card with number 2 * *X* in the second box.
 So the first few numbers in the boxes will be: 

First box : 1, 3, 4, 5, 7, ...

Second box : 2, 6, 8, 10, 14, ...

Omar came back home and he asked Samir for the card with number *Q* written on it. Help Samir to find out in which box he can find the required card.

## Input

Your program will be tested on one or more test cases. The first line of the input will be a single integer *T*, the number of test cases .

*T* lines follow, each describing a test case consisting of a single integer *Q* (1 ≤ *Q* ≤ 1018)

## Output

For every test case print "First Box" if the card is in the first box or "Second Box" otherwise.

## Examples

### Example 1
**Input:**
```
3
1
6
1024
```

**Output:**
```
First Box
Second Box
First Box
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

#define int unsigned long long
signed main()
{
    int t, q;
    int counter = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> q;

        while (q % 2 == 0)
        {
            q /= 2;
            counter++;
        }

        if (counter % 2 == 0)
            cout << "First Box\n";
        else
            cout << "Second Box\n";
            counter =0;
    }
}
```
