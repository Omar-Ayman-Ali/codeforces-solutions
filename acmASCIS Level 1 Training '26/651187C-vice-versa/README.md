# [651187C] Vice Versa

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349490433](https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349490433)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 61 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Vice Versa

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes

## Description

Our friend Gazzar has a task to do. He has a word and wants to convert it into its reverse and know if it's palindrome or not. A palindrome is a word that reads the same backward as forward, for example words "z", "aaa", "aba", "abccba" are palindromes, but "codeforces", "reality", "ab" are not. But Gazzar is lazy and wants your help. Can you do it?

![image](https://espresso.codeforces.com/3c7d6cb84b65d9f3ee5b0cb283f2f01734868b20.png)

## Input

First line contains integer *n*(1 ≤ *n* ≤ 1000) number of characters in the word Second line contains the word.

## Output

In the first line print the reverse of the word. In the second line if it's a palindrome print YES and NO otherwise.

## Examples

### Example 1
**Input:**
```
4
m3l4
```

**Output:**
```
4l3m
NO
```

## Note

"abc" its reverse is "cba".

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

int main()
{
    int numberChar;
    cin >> numberChar;
    
    char arrChar[numberChar];
    for(int i = 0; i < numberChar; i++)
        cin >> arrChar[i];

    int m = 0;
    for(int i = 0, j = numberChar - 1; i < j; i++, j--)
    {
        if(arrChar[i] == arrChar[j]) m++;
    }
    for(int j =numberChar-1; j>=0;j-- )
   {
   	
   	cout<<arrChar[j];
   	}

		cout << endl;

    if(m == numberChar / 2)
        cout << "YES";
    else
        cout << "NO";
}
```
