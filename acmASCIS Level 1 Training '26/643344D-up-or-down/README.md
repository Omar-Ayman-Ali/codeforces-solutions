# [643344D] Up Or Down?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355212176](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355212176)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Up Or Down?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/D)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Omar is really into card tricks.

He has this new trick, where he gets a deck of N face-down cards, and goes through those cards N times, on iteration number 1, he flips all cards, on iteration number 2, he flips every second card, on iteration number i he flips every ith card.

Given N, can you tell us if the Nth is face up or down?

## Input

Input consists of a single line, containing N (1  ≤  N  ≤  109), the number of face-down cards the deck has.

## Output

Output "Face up." if the last card is facing up, and "Face down." if the last card is facing down.

## Examples

### Example 1
**Input:**
```
6241
```

**Output:**
```
Face up.
```

## Note

Flipping a card is setting the card face up, if it was previously facing down, and face down if it was previously facing up.

In the third test case, at first all the cards are facing down {D,D,D,D}, then in the 1st iteration they are all flipped {U,U,U,U} then on the 2nd iteration he flips every second card {U,D,U,D}, on the 3rd iteration he flips every third card {U,D,D,D}, on the 4th and final iteration he flips every 4th card {U,D,D,U} thus, the answer is that the 4th card is facing upwards.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>

using namespace std;
#define int long long
signed main()
{
    int n, s;
    cin >> n;
    s = sqrt(n);
    if (s * s == n)
        cout << "Face up.";
    else
        cout << "Face down.";
}
```
