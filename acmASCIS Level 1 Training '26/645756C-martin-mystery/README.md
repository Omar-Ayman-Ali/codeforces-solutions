# [645756C] Martin Mystery

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355409761](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355409761)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 187 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Martin Mystery

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/C)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

$\;\;\;\;$$Java$, $Martin$ and $Diana$ his stepsister went out on a mission to investigate the paranormal enigmas and the slimiest creatures from beyond, but as usual, Martin got them into troubles.

$\;\;\;\;$As they were discovering the area they got caught by a strange creature who locked them in a cell. In order to unlock the cell, they had to play a game. They will be given a number of points and their coordinates in the Cartesian coordinate plane. They had to determine whether all the points lie on the same line or not.

![image](https://espresso.codeforces.com/45312cd26788f12b46dae3d0ab5a77acad8a1c77.png)

## Input

The first line contains an integer $N$ $( 3 \leq N \leq 10^5)$ – the number of points they were given.

The following $N$ lines each contains $X$ and $Y$ $(-10^9 \leq X,Y \leq 10^9)$ – the coordinates of each point.

It is guaranteed that the points are distinct.

## Output

Print "YES" if they all lie on the same line, otherwise print "NO".

You can print each letter in any case (upper or lower).

## Examples

### Example 1
**Input:**
```
5
-1 0
5 3
1 2
4 6
7 0
```

**Output:**
```
NO
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int n, x, y, x1, x2, y1, y2;
    bool c = true;
    cin >> n;

    cin >> x1 >> y1 >> x2 >> y2;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        if((y-y1)*(x2 - x1) != (y2-y1)*(x-x1))
            {
                c =false;
                break;
            }
    }
    if(c)
        cout <<"YES";
    else
        cout << "NO";
    
}
```
