# [651191A] The Lost Number

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350328046](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350328046)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 77 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. The Lost Number

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/A)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Hazem was very busy training for the ACPC, but despite being an awesome problem solver, he was a lazy person. He was challenged to find a certain number in a box containing 10 pieces of paper with a number on each piece, as this challenge was very trivial to him he asked you to do it instead of him.

## Input

The input consists of two lines, the first line containing 10 integer numbers ( - 109 ≤ *n**i* ≤ 109).

The Second line contains integer number *x* that Hazem is looking for ( - 109 ≤ *x* ≤ 109).

## Output

Output one line only containing "Found" if *x* is in the box, or "Not Found" is *x* is not in the box.

## Examples

### Example 1
**Input:**
```
1 2 3 4 5 6 7 8 9 0
2
```

**Output:**
```
Found
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long 
signed main()
{
    int  x;
    int n[10];    
    bool checker = false;
    
    for(int i=0; i < 10; i++)cin >> n[i];
    cin >> x;
    for(int i=0; i < 10; i++)if( x == n[i]) checker = true;

    if(checker) cout << "Found";
    else cout << "Not Found";
}
```
