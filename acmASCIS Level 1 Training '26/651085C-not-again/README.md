# [651085C] Not Again!

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/349010005](https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/349010005)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 171 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Not Again!

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Peter$ loves geometry, but $Fady$ and $Abdelhady$ always doubt him. Every time he submits a geometry problem, they confidently assume he will get it wrong.

To settle things once and for all, $Peter$ makes a bet with them: If he manages to get all his recent geometry problems submissions ACCEPTED, then he will proudly tell them HAHA EZ. But if at least one submission is wrong, then they will immediately respond with Tani ?

You are given the results of $Peter's$ $n$ geometry problems submissions. Each result is represented by a number:

- $1$ means ACCEPTED
- $0$ means WRONG ANSWER

Your task is to determine which word will be said based on his performance.

## Input

The first line contains an integer $n \ (1 \leq n \leq 2 \cdot 10^5)$ — the number of geometry problems submissions $Peter$ made.

The second line contains $n$ integers, each either $0$ or $1$, representing the verdicts.

## Output

Print the word that will be said: "HAHA EZ" (without the quotes) if $Peter$ wins the bet, otherwise "Tani ?" (without the quotes)

## Examples

### Example 1
**Input:**
```
5
1 1 1 1 0
```

**Output:**
```
Tani ?
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
long long  n,x;long long counter = 0;
    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> x;
        if(  x ==1 )
        {
            counter++;
        }
        else counter =0;
    }
    if(counter == n)
    {
        cout << "HAHA EZ";
    }
    else cout << "Tani ?";
}
```
