# [219158R] Age in Days

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386517881](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386517881)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Age in Days

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R)

## Description

# R. Age in Days

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a Number *N* corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

## Input

Only one line containing a number *N* (0 ≤ *N* ≤ 106).

## Output

Print the output, like the following examples.

## Examples

### Example 1
**Input:**
```
400
```

**Output:**
```
1 years
1 months
5 days
```

## Examples

### Example 1
**Input:**
```
400
```

**Output:**
```
1 years
1 months
5 days
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

    int days, year, month;
    cin >> days;

    year = days / 365;
    days = days % 365;

    month = days / 30;
    days = days % 30;

    cout << year << " years" << "\n";
    cout << month << " months" << "\n";
    cout << days << " days" << "\n";
}
```
