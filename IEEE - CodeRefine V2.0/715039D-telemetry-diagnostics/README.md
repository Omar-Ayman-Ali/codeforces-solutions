# [715039D] Telemetry Diagnostics

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/D](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/D)
- **Submission ID:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390184718](https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390184718)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# D. Telemetry Diagnostics

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/D](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Ghazy is a Lead Infrastructure Architect responsible for overseeing high-availability clusters in a distributed cloud ecosystem. Recently, his team onboarded Yousef, a junior DevOps engineer assigned to manage the load balancing service for a core microservice.

Yousef believes that as long as his microservice registers activity, the system is performing optimally. However, Ghazy knows that high system availability is measured by sustained uptime rather than intermittent bursts. To demonstrate the importance of system stability, Ghazy pulls telemetry logs from Yousef's deployment pipeline.

The telemetry log is represented as a binary string$^{\text{∗}}$, captured across sequential monitoring windows:

- '1' indicates that the microservice passed health checks, handled traffic successfully, and remained online during that window.
- '0' indicates a critical component failure, node crash, or timeout, which disrupts continuous operations and resets the operational uptime counter back to zero.

Ghazy wants to analyze the microservice's overall stability by identifying its longest single stretch of continuous, uninterrupted health. Your task is to calculate the maximum length of a contiguous sequence consisting entirely of operational windows ('1').

$^{\text{∗}}$A binary string is a string that consists only of the characters 0 and 1.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 100$). The description of the test cases follows.

Each test case consists of a single line containing the binary telemetry string $s$ ($1 \le \vert{}s\vert{} \le 2 \cdot 10^5$), consisting strictly of characters '0' and '1'.

It is guaranteed that the sum of $\vert{}s\vert{}$ over all test cases does not exceed $2 \cdot 10^5$.

## Output

For each test case, print a single integer — the maximum length of a contiguous sequence of consecutive operational windows ('1').

## Examples

### Example 1
**Input:**
```
3
100111
10111011
0000
```

**Output:**
```
3
3
0
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll cntr = 0, m = 0;
        string x;
        cin >> x;
        ll i = 0;
        while (i < x.length())
        {
            while (x[i] == '1')
            {
                cntr++;
                i++;
            }
            m = max(m, cntr);
            cntr = 0;
            i++;
        }
        cout << m << '\n';
    }

    return 0;
}

```
