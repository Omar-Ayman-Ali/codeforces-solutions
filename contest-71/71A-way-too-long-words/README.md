# [71A] Way Too Long Words

- **Problem Link:** [https://codeforces.com/contest/71/problem/A](https://codeforces.com/contest/71/problem/A)
- **Submission ID:** [https://codeforces.com/contest/71/submission/371089742](https://codeforces.com/contest/71/submission/371089742)
- **Rating:** 800
- **Tags:** strings
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Way Too Long Words

- **Problem Link:** [https://codeforces.com/contest/71/problem/A](https://codeforces.com/contest/71/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

## Input

The first line contains an integer *n* (1 ≤ *n* ≤ 100). Each of the following *n* lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

## Output

Print *n* lines. The *i*-th line should contain the result of replacing of the *i*-th word from the input data.

## Examples

### Example 1
**Input:**
```
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```

**Output:**
```
word
l10n
i18n
p43s
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

int counting(string x)
{
    int i = 0;
    int cntr = 0;
    while (x[i] != '\0')
    {
        cntr++;
        i++;
    }
    return cntr;
};
void display(string x)
{
    int i = counting(x);
    if (i > 10)
    {
        cout << x[0] << i - 2 << x[i - 1] << '\n';
    }
    else
        cout << x << '\n';
};

int main()
{
    fast;
    int t;
    cin >> t;
    string arr1[t];
    for (int i = 0; i < t; i++)
        cin >> arr1[i];
    for (int i = 0; i < t; i++)
        display(arr1[i]);
}
```
