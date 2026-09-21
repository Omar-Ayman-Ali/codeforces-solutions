# [651191D] Clean up the Mess

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350383681](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350383681)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 859 ms
- **Memory Consumed:** 1100 KB

## Problem Statement

# D. Clean up the Mess

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/D)
- **Time Limit:** 5 seconds
- **Memory Limit:** 4 megabytes

## Description

After Pashmak's birthday party, the house was in a complete mess. His friends betrayed him and went home without helping him clean except for Tavas.

Pashmak, being the birthday boy, decided to leave the cleaning for Tavas. Tavas being a faithful friend didn't mind cleaning all by himself. The problem was that Tavas didn't know the correct order of the objects in the house.

Pashmak told him that the correct order of the objects is to sort them. The objects are represented by letters (each letter stands for an object in the house). Sort these letters in an alphabetical order so that Tavas would know how to place the objects in the house.

## Input

The first line of input contains an integer $n \, (1 \leq n \leq 5000000)$ — the number of objects in the house.

The following line contains $n$ lowercase letters representing objects as said above.

## Output

Print the sorted objects.

## Examples

### Example 1
**Input:**
```
5
habaz
```

**Output:**
```
aabhz
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

#define int long long 
signed main()
{
    int n;
    cin >> n;
    char arr1[n];

    for(int i=0; i < n; i++) cin >> arr1[i];

    sort(arr1,arr1 + n);
     for(int i=0; i < n; i++) cout << arr1[i];
}
```
