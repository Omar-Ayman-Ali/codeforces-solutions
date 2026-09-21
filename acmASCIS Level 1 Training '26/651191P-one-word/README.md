# [651191P] One Word

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/P](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/P)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360617094](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360617094)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# P. One Word

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/P](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/P)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A compressed word $T$ of a word $S$ is a resulting word after compressing all equal adjacent characters into one character.

For example, if $S$ = "aabcca" then $T$ = "abca", and if $S$ = "abddddca" then $T$ = "abdca".

Given a word $S$ of length $N$ and $Q$ queries, every query is to add character at the end of the word, you should print the length of the compressed word of the word $S$ after adding a new character at each query.

## Input

The first line of the input contains a signle integer $N$ $(1 \leq N \leq 10^{3})$ the length of the word.

The second line of the input contains the word $S$ of length $N$ contains only lowercase Latin letters.

The third line contains an integer $Q$ $(1 \leq Q \leq 10^{3})$ represents the number of the queries.

Every line of the next $Q$ lines contains a lowercase character $C$ which denotes that the character $C$ should be added to the word $S$ after this query.

## Output

Print $Q$ lines, each line represents the length of the compressed word of the word $S$ after adding the corresponding character to it.

## Examples

### Example 1
**Input:**
```
4
abbc
3
c
a
c
```

**Output:**
```
3
4
5
```

## Note

In the given sample, After the first query, the character 'c' will be added to the word "abbc" so word will become "abbcc", so the compressed word will become "abc" which has length = 3.

After the second query, the character 'a' will be added to the word "abbcc", so the word will become "abbcca", so the compressed word will become "abca" which has length = 4.

After the third query, the character 'c' will be added to the word "abbcca", so the word will be "abbccac", so the compressed word will become "abcac" which has length = 5.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

signed main()
{
    int sizeChar;
    cin >> sizeChar;
    char arr1[sizeChar];

    for (int i = 0; i < sizeChar; i++)
    {
        cin >> arr1[i];
    }

    int compressedLength = 1;
    char last = arr1[0];
    for (int i = 1; i < sizeChar; i++)
    {
        if (last != arr1[i])
            compressedLength++;
        last = arr1[i];
    }
    int q;
    char z = arr1[sizeChar - 1];
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;
        if (last != c)
            compressedLength++;
            last = c;
                cout << compressedLength<<endl;

    }
}
```
