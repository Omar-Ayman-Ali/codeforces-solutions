# [651191K] Stones

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/K](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/K)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360380719](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360380719)
- **Rating:** 800
- **Tags:** brute force, greedy, math
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# K. Stones

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/K](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/K)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

*Sally* found some colorful stones in the attic. She wants to know how many of them are *blue*, *red* and *green*.

Help her count the stones for each color.

## Input

You'll be given a string of uppercase characters explaining the colors of the stones, (1 ≤ |*S*| ≤ 100)  –  |*S*| is the string's length.

'*R*'  –  for *red*.

'*B*'  –  for *blue*.

'*G*'  –  for *green*.

## Output

Print the number of stones for each color each in a separte line in the following format:

"Red = X", where *X* denotes the number of red stones.

"Blue = Y", where *Y* denotes the number of blue stones.

"Green = Z", where *Z* denotes the number of green stones.

## Examples

### Example 1
**Input:**
```
RGB
```

**Output:**
```
Red stones = 1
Blue stones = 1
Green stones = 1
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int r,g,b;
    r =0;
    g = 0;
    b = 0;
 
    char x[101]{};
    for(int i=0; i < 101; i++)
        cin >> x[i];
    for(int i=0; i < 101; i++)
        {
            if(x[i] == 'R')
                r++;
            else if(x[i] == 'G')
                g++;
                else if(x[i] == 'B')
                    b++;
        }
        cout << "Red stones = " << r << "\n" << "Blue stones = " << b << "\n" << "Green stones = " << g << "\n";

}
```
