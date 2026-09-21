# [643344B] Sticks

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/373507687](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/373507687)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. Sticks

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/B)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

On Tuesdays Hassan and Ali have a heavy schedule.After the first 5 classes they finally had their breaktime. In the playground they found three sticks. As Hassan is a clever student, he asked Ali if he can form a triangle with these sticks? Given the length of each stick, Help Ali answer the question.

## Input

You will be given 3 integers *X*, *Y*, *Z*(1 ≤ *X*, *Y*, *Z* ≤ 1013)

## Output

If Ali can form a triangle output "YES",otherwise "NO".

## Examples

### Example 1
**Input:**
```
3 4 5
```

**Output:**
```
YES
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main()
{
    long long x, y, z;
    cin >> x >> y >> z;
    if (x + y > z && y + z > x && x + z > y)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
```
