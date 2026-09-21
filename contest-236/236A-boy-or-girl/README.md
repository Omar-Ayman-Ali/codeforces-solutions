# [236A] Boy or Girl

- **Problem Link:** [https://codeforces.com/contest/236/problem/A](https://codeforces.com/contest/236/problem/A)
- **Submission ID:** [https://codeforces.com/contest/236/submission/371926347](https://codeforces.com/contest/236/submission/371926347)
- **Rating:** 800
- **Tags:** brute force, implementation, strings
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 92 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Boy or Girl

- **Problem Link:** [https://codeforces.com/contest/236/problem/A](https://codeforces.com/contest/236/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

## Input

The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

## Output

If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

## Examples

### Example 1
**Input:**
```
wjmzbmr
```

**Output:**
```
CHAT WITH HER!
```

## Note

For the first example. There are 6 distinct characters in "wjmzbmr". These characters are: "w", "j", "m", "z", "b", "r". So wjmzbmr is a female and you should print "CHAT WITH HER!".

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

bool isEven(int x)
{
    if (x % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    fast;

    string x;
    cin >> x;
    int z[200] ={};
    int counter = 0;
    for (int i = 0; i < x.length(); i++)
        z[x[i]]++;
    for (int i = 64; i < 123; i++)
        if (z[i] >= 1)
            counter++;
    bool c = isEven(counter);
    if (!c)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

    return 0;
}
```
