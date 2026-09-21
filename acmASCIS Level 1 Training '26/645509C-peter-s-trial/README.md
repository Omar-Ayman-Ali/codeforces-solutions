# [645509C] Peter's trial

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/345629769](https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/345629769)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Peter's trial

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Peter$ was wondering whether his solution would pass. To figure it out, he asked his mentor how he could tell if a solution was correct. His mentor answered : if it passes all tests, you will get Accepted , otherwise you will get something else . $Peter$ knows the total number of tests $n$ and how many of them he passed $m$.

Help him determine his verdict.

## Input

The only line of input contains $2$ integers $n,m$ $(1 \le m \le n \le 100)$, the total number of tests and how many tests $Peter$ passed, respectively.

## Output

Print Accepted if his solution is correct, otherwise print Wrong.

## Examples

### Example 1
**Input:**
```
6 4
```

**Output:**
```
Wrong
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if(n == m)
    {
        cout << "Accepted";
    }
    else{
        cout << "Wrong";
    }
}
```
