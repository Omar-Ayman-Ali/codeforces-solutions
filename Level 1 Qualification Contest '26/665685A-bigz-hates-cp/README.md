# [665685A] Bigz hates CP

- **Problem Link:** [https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/A](https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/A)
- **Submission ID:** [https://codeforces.com/group/pz7RXdwh9g/contest/665685/submission/360762617](https://codeforces.com/group/pz7RXdwh9g/contest/665685/submission/360762617)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Bigz hates CP

- **Problem Link:** [https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/A](https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Once, $Bigz$ was a great CPer. He worked very hard and reached the rank of Candidate Master. But one day, a random guy in Russia had some serious issues with $BigZ$, and the contest became unrated.

$Bigz$ lost his rank and became an Expert again. He was so upset that he started to hate competitive programming. Then, a Wizard cast a $"Russian Curse"$ on him. Now, $Bigz$ cannot solve even the simplest problems. He has asked you to solve this last one for him.

Given an array $A$ of $n$ integers, find the length of the longest subsequence such that all elements in the subsequence have the same parity.

In other words, you must find a subsequence where one of the following conditions is met:

- Every element in the subsequence is even.
- Every element in the subsequence is odd.

## Input

- The first line contains a single integer $n$ ($1 \le n \le 10^5$), representing the number of elements in the array.
- The second line contains $n$ space-separated integers $a_1, a_2, \dots, a_n$ ($0 \le a_i \le 10^9$).

## Output

- Print a single integer representing the maximum possible length of such a subsequence.

## Examples

### Example 1
**Input:**
```
5
7 2 5 3 4
```

**Output:**
```
3
```

## Note

A subsequence is any sequence derived from array A by deleting some (or no) elements, without changing the order of the remaining elements.

For example, given the array [1, 2, 3], the subsequences are: [], [1], [2], [3], [1, 2], [1, 3], [2, 3], [1, 2, 3] while: [3,2] is not a subsequence

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int Ecoutner = 0;
    int Ocounter = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            Ecoutner++;
            else
            Ocounter++;
    }
    cout << max(Ecoutner,Ocounter);
    
}
```
