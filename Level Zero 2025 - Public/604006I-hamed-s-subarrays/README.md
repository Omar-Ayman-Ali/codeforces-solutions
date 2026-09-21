# [604006I] Hamed's Subarrays

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/I](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/I)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389689327](https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389689327)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 7900 KB

## Problem Statement

# I. Hamed's Subarrays

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/I](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/I)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Hamed gives you an array $a$ of $n$ integers and asks you to count how many subarrays which sum equal zero.

a subarray is a contiguous part of array $a$ $a[l,r]$ is the array $[a_l,a_{l+1},…,a_r]$.

## Input

The first line of input consists of one integer $n$ $(1 \le n \le 10^5)$ – represents the size of the array.

The second line of input consists of $n$ integers $a_1, a_2, ...., a_n$ $(-10 \le a_i \le 10)$ – represents the elements of the array.

## Output

output how many zero subarrays.

## Examples

### Example 1
**Input:**
```
5
1 2 -2 -1 3
```

**Output:**
```
3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

const int OFFSET = 1000000;
int freq[2 * OFFSET + 5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    freq[0 + OFFSET] = 1;

    long long current_prefix = 0;
    long long zero_subarrays = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        current_prefix += x;

        zero_subarrays += freq[current_prefix + OFFSET];

        freq[current_prefix + OFFSET]++;
    }

    cout << zero_subarrays << "\n";

    return 0;
}
```
