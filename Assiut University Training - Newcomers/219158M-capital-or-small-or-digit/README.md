# [219158M] Capital or Small or Digit

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385983323](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385983323)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Capital or Small or Digit

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M)

## Description

# M. Capital or Small or Digit

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a letter *X*. Determine whether *X* is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:

- Digits in ASCII '0' = 48,'1' = 49 ....etc
- Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
- Small letters in ASCII 'a' = 97,'b' = 98 ....etc

## Input

Only one line containing a character *X* which will be a capital or small letter or digit.

## Output

Print a single line contains "IS DIGIT" if *X* is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if *X* is a capital letter and "IS SMALL" if *X* is a small letter.

## Examples

### Example 1
**Input:**
```
A
```

**Output:**
```
ALPHA
IS CAPITAL
```

## Note

** recommended to read this to know more about ASCII Code [https://www.javatpoint.com/ascii](https://www.javatpoint.com/ascii).

## Examples

### Example 1
**Input:**
```
A
```

**Output:**
```
ALPHA
IS CAPITAL
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

    char x;
    cin >> x;
    if(x>=65 && x <=91)
        cout << "ALPHA"<< "\nIS CAPITAL";
    else if(x>=97 &&  x<=123)
        cout << "ALPHA"<< "\nIS SMALL";
    else 
    cout << "IS DIGIT";

}
```
