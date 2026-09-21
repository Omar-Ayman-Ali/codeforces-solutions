# [219432V] PUM

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387939363](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387939363)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# PUM

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V)

## Description

# V. PUM

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print *N* lines that describes PUM game.

For more clarification see the examples.

## Input

Only one line containing a number *N* (1 ≤ *N* ≤ 20).

## Output

Print the answer according to the required above.

## Examples

### Example 1
**Input:**
```
7
```

**Output:**
```
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM
```

## Note

Don't print any extra spaces.

## Examples

### Example 1
**Input:**
```
7
```

**Output:**
```
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM
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
    fast;

    int n;
    cin >> n;
    int counter = 1;
    while (n--)
    {

        for (int i = 1; i <= 3; i++)
        {
            cout << counter << ' ';
            counter++;
        }
        cout << "PUM" << endl;
        counter++;
    }

    return 0;
}
```
