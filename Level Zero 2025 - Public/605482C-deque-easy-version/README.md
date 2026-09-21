# [605482C] Deque Easy version

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/C)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391300337](https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391300337)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Deque Easy version

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You have an empty deque $ dq $ of integers, and q queries in the following format:

- push_back x : where $(1≤ x ≤ 10^9)$ add x at the end of the deque.
- push_front x : where $(1≤ x ≤ 10^9)$ add x at the begin of the deque.
- pop_front : remove the first element in the deque.
- pop_back : remove the last element in the deque.
- front: print the first element in the deque.
- back: print the last element in the deque.
- print x : where $( 1 ≤ x ≤ |dq|) $ print the element in index x of the deque.

It's guaranteed that in the last 5 types of the query, the deque is not empty

## Input

The first line of input contains an integer q $ ( 1 ≤ q ≤10^5) $ .

The next q lines contains the queries.

## Output

Print the answer to the queries in separate lines

## Examples

### Example 1
**Input:**
```
16
push_back 5
front
back
push_back 6
front
back
push_front 3
front
back
print 2
pop_back
front
back
pop_front
front
back
```

**Output:**
```
5
5
5
6
3
6
5
3
5
5
5
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
    deque<int> dq;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            int n;
            cin >> n;
            dq.push_back(n);
        }
        else if (s == "push_front")
        {
            int n;
            cin >> n;
            dq.push_front(n);
        }
        else if (s == "pop_front")
        {
            dq.pop_front();
        }
        else if (s == "pop_back")
        {
            dq.pop_back();
        }
        else if (s == "front")
            cout << dq.front() << endl;
        else if (s == "back")
            cout << dq.back() << endl;
        else
        {
            int n;
            cin >> n;
            cout << dq[n - 1] << endl;
        }
    }

    return 0;
}
```
