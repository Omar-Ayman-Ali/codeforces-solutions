# [25A] IQ test

- **Problem Link:** [https://codeforces.com/contest/25/problem/A](https://codeforces.com/contest/25/problem/A)
- **Submission ID:** [https://codeforces.com/contest/25/submission/370832515](https://codeforces.com/contest/25/submission/370832515)
- **Rating:** 1300
- **Tags:** brute force
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. IQ test

- **Problem Link:** [https://codeforces.com/contest/25/problem/A](https://codeforces.com/contest/25/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given *n* numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given *n* numbers finds one that is different in evenness.

## Input

The first line contains integer *n* (3 ≤ *n* ≤ 100) — amount of numbers in the task. The second line contains *n* space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

## Output

Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

## Examples

### Example 1
**Input:**
```
5
2 4 7 8 10
```

**Output:**
```
3
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

int eCounter = 0;
int oCounter = 0;
typedef long long ll;
typedef vector<int> vi;

bool isEven(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
};

void checker(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isEven(arr1[i]))
            eCounter++;
        else
            oCounter++;
    }
};

int main()
{
    fast;
    int n;
    cin >> n;
    int arr1[n];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    checker(arr1, n);

    if (eCounter > oCounter){
        for (int i = 0; i < n; i++)
            if (!isEven(arr1[i]))
                cout << i + 1;
    }
            else
                for (int i = 0; i < n; i++)
                    if (isEven(arr1[i]))
                        cout << i + 1;
}

```
