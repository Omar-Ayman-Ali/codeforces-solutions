# [158A] Next Round

- **Problem Link:** [https://codeforces.com/contest/158/problem/A](https://codeforces.com/contest/158/problem/A)
- **Submission ID:** [https://codeforces.com/contest/158/submission/371124401](https://codeforces.com/contest/158/submission/371124401)
- **Rating:** 800
- **Tags:** *special, implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 92 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Next Round

- **Problem Link:** [https://codeforces.com/contest/158/problem/A](https://codeforces.com/contest/158/problem/A)
- **Time Limit:** 3 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

"Contestant who earns a score equal to or greater than the *k*-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of *n* participants took part in the contest (*n* ≥ *k*), and you already know their scores. Calculate how many participants will advance to the next round.

## Input

The first line of the input contains two integers *n* and *k* (1 ≤ *k* ≤ *n* ≤ 50) separated by a single space.

The second line contains *n* space-separated integers *a*1, *a*2, ..., *a**n* (0 ≤ *a**i* ≤ 100), where *a**i* is the score earned by the participant who got the *i*-th place. The given sequence is non-increasing (that is, for all *i* from 1 to *n* - 1 the following condition is fulfilled: *a**i* ≥ *a**i* + 1).

## Output

Output the number of participants who advance to the next round.

## Examples

### Example 1
**Input:**
```
8 5
10 9 8 7 7 7 5 5
```

**Output:**
```
6
```

## Note

In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.

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
    int k;
    cin >> n >> k;
    int counter = 0;
    int arr1[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] >= arr1[k-1] and arr1[i] > 0)
            counter++;
    }
    cout << counter;
    return 0;
}
```
