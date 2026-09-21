# [651085E] Bridge

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/349173376](https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/349173376)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Bridge

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/E)
- **Time Limit:** 0.5 seconds
- **Memory Limit:** 64 megabytes

## Description

$Kuroudo$ was searching for a way to reconnect with his coach $Onmi-Man$. He found a blog on codeforces that said "Bridges". He started reading and realised this is exactly what he needs. He became really good at building bridges, so good he built a bridge of length $l$. Wanting to be left alone, $Onmi-Man$ broke this bridge.

Now there are $n$ points on the bride, such that the first point is the start of the bridge and the last point is the end, and all points are equally distant. You are asked to find the summation of all distances between any two points on this bridge. It is guaranteed that all input samples have an integer answer.

## Input

Only line of input contains two integers $n$ and $l$ $(2 \le n,l \le 10^6)$.

## Output

Print one integer — the answer to the problem.

## Examples

### Example 1
**Input:**
```
3 7
```

**Output:**
```
14
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
    #include <iostream>

    using namespace std;

    int main()
    {
        long long n,l;__int128 b=0;
        cin >> n >> l;

        for(int i =1; i <= n-1 ; i++)
        {
            b =b + ((n-i)*i);
        }
        b=b*l;
        b=b/(n-1);
        cout << (long long)b;
        
    }
```
