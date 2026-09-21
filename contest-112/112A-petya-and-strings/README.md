# [112A] Petya and Strings

- **Problem Link:** [https://codeforces.com/contest/112/problem/A](https://codeforces.com/contest/112/problem/A)
- **Submission ID:** [https://codeforces.com/contest/112/submission/371139848](https://codeforces.com/contest/112/submission/371139848)
- **Rating:** 800
- **Tags:** implementation, strings
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 92 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Petya and Strings

- **Problem Link:** [https://codeforces.com/contest/112/problem/A](https://codeforces.com/contest/112/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

## Input

Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

## Output

If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

## Examples

### Example 1
**Input:**
```
aaaa
aaaA
```

**Output:**
```
0
```

## Note

If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

- http://en.wikipedia.org/wiki/Lexicographical_order

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

    string a;
    string c;

    
    bool x = false;
    cin >> a >> c;

    for (int i = 0; i < a.length(); i++)
    {
        if( tolower(a[i]) ==  tolower(c[i]))
            continue;
        else if(tolower(a[i]) >  tolower(c[i]))
            {
                cout << 1;
                x= true;
                break;
            }
        else
            {
                cout << -1;
                x= true;
                 break;
            }
    }
    if(!x)
        cout << 0;
}
    
    

```
