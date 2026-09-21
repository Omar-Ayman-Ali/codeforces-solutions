# [604006A] Really..!

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/A)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389097840](https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389097840)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Really..!

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Sam07a$ told $Sameh$ a new interesting information. All the Fans have odd number of fan arms for some mechanical reason.

![image](https://espresso.codeforces.com/a3944ea4fa9933f5c76c845242bc82d7f0b6bdcb.png)

Did you know that...?

$Sameh$ wants to know if $Sam07a$ is right or not . please help him.

## Input

only one integer $n (2 \le n \le 100)$ the number of the Fan Arms.

## Output

If $Sam07a$ is right print "$YES$" , otherwise print "$NO$".

## Examples

### Example 1
**Input:**
```
3
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

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int n;
    cin >> n;
    if( n % 2 == 0)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
```
