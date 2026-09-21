# [1901A] Line Trip

- **Problem Link:** [https://codeforces.com/contest/1901/problem/A](https://codeforces.com/contest/1901/problem/A)
- **Submission ID:** [https://codeforces.com/contest/1901/submission/381765442](https://codeforces.com/contest/1901/submission/381765442)
- **Rating:** 800
- **Tags:** greedy, math
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Line Trip

- **Problem Link:** [https://codeforces.com/contest/1901/problem/A](https://codeforces.com/contest/1901/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

There is a road, which can be represented as a number line. You are located in the point $0$ of the number line, and you want to travel from the point $0$ to the point $x$, and back to the point $0$.

You travel by car, which spends $1$ liter of gasoline per $1$ unit of distance travelled. When you start at the point $0$, your car is fully fueled (its gas tank contains the maximum possible amount of fuel).

There are $n$ gas stations, located in points $a_1, a_2, \dots, a_n$. When you arrive at a gas station, you fully refuel your car. Note that you can refuel only at gas stations, and there are no gas stations in points $0$ and $x$.

You have to calculate the minimum possible volume of the gas tank in your car (in liters) that will allow you to travel from the point $0$ to the point $x$ and back to the point $0$.

## Input

The first line contains one integer $t$ ($1 \le t \le 1000$) — the number of test cases.

Each test case consists of two lines:

- the first line contains two integers $n$ and $x$ ($1 \le n \le 50$; $2 \le x \le 100$);
- the second line contains $n$ integers $a_1, a_2, \dots, a_n$ ($0  \lt  a_1  \lt  a_2  \lt  \dots  \lt  a_n  \lt  x$).

## Output

For each test case, print one integer — the minimum possible volume of the gas tank in your car that will allow you to travel from the point $0$ to the point $x$ and back.

## Examples

### Example 1
**Input:**
```
3
3 7
1 2 5
3 6
1 2 5
1 10
7
```

**Output:**
```
4
3
7
```

## Note

In the first test case of the example, if the car has a gas tank of $4$ liters, you can travel to $x$ and back as follows:

- travel to the point $1$, then your car's gas tank contains $3$ liters of fuel;
- refuel at the point $1$, then your car's gas tank contains $4$ liters of fuel;
- travel to the point $2$, then your car's gas tank contains $3$ liters of fuel;
- refuel at the point $2$, then your car's gas tank contains $4$ liters of fuel;
- travel to the point $5$, then your car's gas tank contains $1$ liter of fuel;
- refuel at the point $5$, then your car's gas tank contains $4$ liters of fuel;
- travel to the point $7$, then your car's gas tank contains $2$ liters of fuel;
- travel to the point $5$, then your car's gas tank contains $0$ liters of fuel;
- refuel at the point $5$, then your car's gas tank contains $4$ liters of fuel;
- travel to the point $2$, then your car's gas tank contains $1$ liter of fuel;
- refuel at the point $2$, then your car's gas tank contains $4$ liters of fuel;
- travel to the point $1$, then your car's gas tank contains $3$ liters of fuel;
- refuel at the point $1$, then your car's gas tank contains $4$ liters of fuel;
- travel to the point $0$, then your car's gas tank contains $3$ liters of fuel.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int cntr = 1, max_cntr = cntr;

        cin >> n >> x;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = a[0];
        for (int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[i - 1]);
        ans = max(ans, 2 * (x - a[n - 1]));
        cout << ans << endl;
    }
}
```
