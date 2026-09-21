# [591913O] Sum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/O](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/O)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388679301](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388679301)
- **Rating:** 1500
- **Tags:** math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# O. Sum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/O](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/O)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You are given three integers $a$, $b$, and $c$. Determine if one of them is the sum of the other two.

## Input

The first line contains a single integer $t$ ($1 \leq t \leq 9261$) — the number of test cases.

The description of each test case consists of three integers $a$, $b$, $c$ ($0 \leq a, b, c \leq 20$).

## Output

For each test case, output "YES" if one of the numbers is the sum of the other two, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

## Examples

### Example 1
**Input:**
```
7
1 4 3
2 5 8
9 11 20
0 0 0
20 20 20
4 12 3
15 7 8
```

**Output:**
```
YES
NO
YES
YES
NO
NO
YES
```

## Note

In the first test case, $1 + 3 = 4$.

In the second test case, none of the numbers is the sum of the other two.

In the third test case, $9 + 11 = 20$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    ll t;
    cin>> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(max({a,b,c}) - (min({a,b,c}) + (a+b+c -(min({a,b,c})+max({a,b,c})))) == 0)
            cout << "YES" <<endl;
        else
            cout <<"NO"<<endl;
    }

    return 0;
}
```
