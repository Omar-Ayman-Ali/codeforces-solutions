# [603848G] Stupid Sensors

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/G)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389362767](https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389362767)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 218 ms
- **Memory Consumed:** 23500 KB

## Problem Statement

# G. Stupid Sensors

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/G)
- **Time Limit:** 2.5 s.
- **Memory Limit:** 512 MB

## Description

Hamed and His Idiot Friends (3B3ZiZ, Om4rr and 3abkrim) are Preparing for a MicroMouse Competition.

They Are Testing IR Sensors to know the Range That IR Works at. Indeed, They have spent some time To Get The Range Of Each IR.

They have $n$ IR Sensors. Each $i$-th Sensor Works between $l_i$ and $r_i$ Centimeters, inclusive, to achieve the Correct Readings.

Hamed thinks that a Distance is admissible if at least $k$ Sensors Work at it.

_Sherbiny Challenges them to find good sensors, so he asks $q$ questions. In each question, He Wants To Know How Many admissible integer distances fall within the range between $a$ and $b$, inclusive, can you tell him how many ?

## Input

The first line of input contains three integers, $n$, $k$ ($1 \leq k \leq n \leq 200000$), and $q$ ($1 \leq q \leq 200000$), the number of Sensors, the minimum number of Sensors that reads certain distance to be admissible, and the number of questions Hamed has, respectively.

The next $n$ lines describe the recipes. Specifically, the $i$-th line among these contains two integers $l_i$ and $r_i$ ($1 \leq l_i \leq r_i \leq 200000$), describing that the $i$-th Sensor Reads Distances between $l_i$ and $r_i$ Centimeters, inclusive.

The next $q$ lines describe the questions. Each of these lines contains $a$ and $b$, ($1 \leq a \leq b \leq 200000$), describing that he wants to know the number of admissible integer Distances between $a$ and $b$ Centimeters, inclusive.

## Output

For each question, output a single integer on a line by itself, the number of admissible integer Distances between $a$ and $b$ Centimeters, inclusive.

## Examples

### Example 1
**Input:**
```
3 2 4
91 94
92 97
97 99
92 94
93 97
95 96
90 100
```

**Output:**
```
3
3
0
4
```

## Note

In the first test case, Hamed knows $3$ Sensors' Ranges.

1. The first one recommends reading distances between $1$ and $4$ Centimeters, inclusive.
2. The second one recommends reading distances between $2$ and $7$ Centimeters, inclusive.
3. The third one recommends reading distances between $7$ and $9$ Centimeters, inclusive.

A distance is admissible if at least $2$ Sensors recommend it.

_Sherbiny asks $4$ questions.

In his first question, he wants to know the number of admissible integer distances between $2$ and $4$ Centimeters, inclusive. There are $3$: $2$, $3$ and $4$ Centimeters are all admissible.

In his second question, he wants to know the number of admissible integer distances between $3$ and $7$ Centimeters, inclusive. There are $3$: $3$, $4$ and $7$ distances are all admissible.

In his third question, he wants to know the number of admissible integer distances between $5$ and $6$ Centimeters, inclusive. There are none.

In his final question, he wants to know the number of admissible integer distances between $1$ and $10$ Centimeters, inclusive. There are $4$: $2$, $3$, $4$ and $7$ Centimeters are all admissible.

In the second test case, Hamed have $2$ Sensors.

1. The first one, recommends reading distances at exactly $1$ Centimeter.
2. The second one, recommends reading distances at exactly $200000$ Centimeters.

A Distance is admissible if at least $1$ Sensor Reads it.

In _Sherbiny's first and only question, he wants to know the number of admissible integer distances that are actually reasonable. There are none.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

const int mx = 2000005;
int freq[mx] = {};
int passed[mx] = {};
int prefix_sum[mx] = {};

int main()
{
    fast;

    int n, k, q;
    if (!(cin >> n >> k >> q))
        return 0;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    for (int i = 1; i < mx; i++)
        freq[i] += freq[i - 1];

    for (int i = 1; i < mx; i++)
        if (freq[i] >= k)
            passed[i] = 1;

    for (int i = 1; i < mx; i++)
        prefix_sum[i] = passed[i] + prefix_sum[i - 1];

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << '\n';
    }
    return 0;
}
```
