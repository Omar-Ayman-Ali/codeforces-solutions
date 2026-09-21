# [645756H] Businessman

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/H](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/H)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348648887](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348648887)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 296 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# H. Businessman

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/H](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/H)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

One day a businessman decided to build a city. He loves equilateral triangles.

He wants to build a city in the form of an equilateral triangle. He went to buy a land and found a lot of them. Each land has $x_1,y_1,x_2,y_2,x_3$ and $y_3$; each $(x,y)$ expresses a vertex from the vertices of the triangle-shaped land.

He is very busy, so he asked you to write a code to know which of $t$ triangle-shaped lands are equilateral triangles.

## Input

The first line of the input contains an integer $t$ $(1 \leq t \leq 10^5)$ – the number of triangle-shaped lands he found.

Each of the following $t$ lines contain six doubles $x_1,y_1,x_2,y_2,x_3$ and $y_3$ $(-10^4 \leq x_1,x_2,x_3,y_1,y_2,y_3 \leq 10^4)$.

## Output

Print $t$ lines. In each line print "Yes" if the $i_{th}$ land is an equilateral triangle, otherwise print "No".

## Examples

### Example 1
**Input:**
```
4
0.000 3.000 3.000 -2.000 -2.830 -2.098
4.000 3.000 -1.000 -2.000 -2.830 -3.830
-2.000 4.000 -2.000 3.000 -2.866 3.500
-1.000 0.000 2.000 -5.000 -3.830 -5.098
```

**Output:**
```
Yes
No
No
Yes
```

## Note

If the distance between $(x_1,y_1)$ and $(x_2,y_2) = 1.2 $ and the distance between $(x_1,y_1)$ and $(x_3,y_3) = 1.7\,$ they're considered equal.

It means that the distance does not depend on the fractional part of its decimal value.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3; int a,b,c; int n;

    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> x1 >>y1>>x2>>y2>>x3>>y3;
    a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    
    if(a == b and c == b and a == c and (y2 - y1)*(x3 - x1) != (y3 - y1)*(x2 - x1)) cout << "Yes" << endl;
        else cout << "No"<<endl;
     a=0;b=0;c=0;
    }
    

}

```
