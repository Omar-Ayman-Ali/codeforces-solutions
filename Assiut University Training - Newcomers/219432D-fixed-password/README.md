# [219432D] Fixed Password

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387688981](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387688981)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Fixed Password

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D)

## Description

# D. Fixed Password

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given multiple lines each line contains a number *X* which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

## Input

The input contains several passwords.

Each line contains a number *X* (103 ≤ *X* ≤ 104 - 1).

## Output

Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

## Examples

### Example 1
**Input:**
```
2200
1020
1999
1000
9999
```

**Output:**
```
Wrong
Wrong
Correct
```

## Examples

### Example 1
**Input:**
```
2200
1020
1999
1000
9999
```

**Output:**
```
Wrong
Wrong
Correct
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

    int x;
    while(cin >> x)
        {
            if(x == 1999)
                {
                    cout <<"Correct" <<endl;
                    return 0;
                }
            else
                cout <<"Wrong"<<endl;
        }

    return 0;
}
```
