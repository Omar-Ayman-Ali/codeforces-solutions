# [643344A] Almost rectangle

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/373505488](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/373505488)
- **Rating:** 800
- **Tags:** implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Almost rectangle

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

One day Tamer was playing with a rectangle carelessly so he broke it now it looks like this.

![image](https://espresso.codeforces.com/0eafd8b15a1c9ad65492feb8429a61444221ea10.png)

instead of being sad that he broke a beautiful rectangle Tamer was curious about the area of the new shape, help him determine the new area.

## Input

you will be given 4 integers, the values of *a*, *b*, *c* and *d* respectively ( 1  ≤  *c*  <  *a*  ≤  103, 1  ≤  *d*  <  *b*  ≤  103 ).

## Output

print the area of the shape rounded to 6 decimal places.

## Examples

### Example 1
**Input:**
```
4 4 2 2
```

**Output:**
```
14.000000
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
    float a,b,c,d;
    float area;
    cin>>a>>b>>c>>d;
    area=(a*b)-(0.5*(a-c)*(b-d));
    cout<<fixed<<setprecision(6)<<area;

    

    return 0;
}
```
