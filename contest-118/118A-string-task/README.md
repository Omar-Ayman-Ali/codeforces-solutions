# [118A] String Task

- **Problem Link:** [https://codeforces.com/contest/118/problem/A](https://codeforces.com/contest/118/problem/A)
- **Submission ID:** [https://codeforces.com/contest/118/submission/372291784](https://codeforces.com/contest/118/submission/372291784)
- **Rating:** 1000
- **Tags:** implementation, strings
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 92 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. String Task

- **Problem Link:** [https://codeforces.com/contest/118/problem/A](https://codeforces.com/contest/118/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

- deletes all the vowels,
- inserts a character "." before each consonant,
- replaces all uppercase consonants with corresponding lowercase ones.

Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

## Input

The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

## Output

Print the resulting string. It is guaranteed that this string is not empty.

## Examples

### Example 1
**Input:**
```
tour
```

**Output:**
```
.t.r
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
    fast;

    string x;
    cin >> x;
    
    for(int i=0; i < x.length();i++)
        {
            char c = tolower(x[i]);
            if(c == 'a' or c == 'e' or c == 'i' or c == 'u' or c == 'o' or c == 'y')
                continue;
            else 
                cout << '.' << c;
        }

    return 0;
}
```
