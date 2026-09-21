# [219432X] Convert To Decimal 2

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/389692653](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/389692653)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Convert To Decimal 2

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X)

## Description

# X. Convert To Decimal 2

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes

## Description

Given a number *N*. Print the result of doing the following operation on *N*:

- Convert *N* to its binary representation.
- Count number of ones in the above binary representation.
- Print the equivalent decimal number that its binary representation has only the number of ones that were counted above.

For example: (10)*decimal* = (1010)*binary* has 2 ones "11", after converting "11" to decimal number it will become 3.

## Input

First line contains a number *T* (1 ≤ *T* ≤ 10) number of test cases.

Next *T* lines will contain a number *N* (1 ≤ *N* ≤ 231 - 1).

## Output

For each test case print a single line contains the answer according to the required above.

## Examples

### Example 1
**Input:**
```
3
10
7
8
```

**Output:**
```
3
7
1
```

## Note

To convert decimal number to binary  :

A decimal integer can be converted to binary by dividing it by 2.

Take the quotient, and keep dividing it by 2, until you reach zero.

Each time you perform this division, take note of the remainder. Now reverse the remainders list, and you get the number in binary form

Example to convert 29 to binary

![image](https://espresso.codeforces.com/d6c8fe3363923ec7b125d248296fbdddbeb8bb1d.png)

for more details visit this [https://flaviocopes.com/converting-decimal-to-binary/](https://flaviocopes.com/converting-decimal-to-binary/)

To convert from binary to Decimal  :

![image](https://espresso.codeforces.com/c801274a4371cadda1fed7679bb4e7be6f50bf34.png)

Second Test Case :

(7)*decimal* = (111)*binary* has 3 ones "111", after converting "111" to decimal number it will become 7.

Third Test Case :

(8)*decimal* = (1000)*binary* has 1 one "1", after converting "1" to decimal number it will become 1.

## Examples

### Example 1
**Input:**
```
3
10
7
8
```

**Output:**
```
3
7
1
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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0, sum = 0;
    cin >> n;
        while (n > 0)
        {
            if (n % 2 != 0)
                c++;
            n /= 2;
        }

        for (int i = 0; i < c; i++)
        {
            sum += pow(2, i);
        }
        cout << sum << endl;
    }

    return 0;
}
```
