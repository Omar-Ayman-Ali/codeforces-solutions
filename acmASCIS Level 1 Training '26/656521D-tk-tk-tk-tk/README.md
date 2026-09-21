# [656521D] Tk Tk Tk Tk...

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/656521/submission/352122853](https://codeforces.com/group/tTJnpKpFzH/contest/656521/submission/352122853)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Tk Tk Tk Tk...

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

There is a fierce competition among the mentors — not in solving problems, but in typing speed!

For example, $die-kstra$ types around $65$ words per minute, while $Skillz$ and $Destiny$ dominate the leaderboard with speeds above $110$ wps.

On the other hand, poor $Peter$ types only about $0.0001$ words per minute...

According to $die-kstra$, a trainee is considered fast enough to compete with the mentors if their typing speed is strictly greater than $50$ words per minute.

You are given an integer $X$ representing a trainee's typing speed (in words per minute).

Determine whether this trainee is fast enough to compete.

If the trainee is fast enough, print "YES"; otherwise, print "NO".

## Input

The first line contains a single integer $T$ $(1 \le T \le 100)$ — the number of test cases.

Each of the next $T$ lines contains an integer $X$ $(1 \le X \le 100)$ — the trainee's speed.

## Output

For each test case, output "YES" if the trainee's speed is fast enough, otherwise "NO".

## Examples

### Example 1
**Input:**
```
2
51
2
```

**Output:**
```
YES
NO
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

#define int long long 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while(testcase--)
    {
        int x;
        cin >> x;

        if(x * x > 50 * 50)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

```
