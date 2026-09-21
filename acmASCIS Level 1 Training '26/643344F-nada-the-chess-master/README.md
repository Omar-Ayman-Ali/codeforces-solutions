# [643344F] Nada The Chess Master

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/F)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355218207](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355218207)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# F. Nada The Chess Master

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/F)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Nada was playing chess with her best friends.

While playing with her friends, she was so good at playing chess that her friends wondered if she can tell how many moves a bishop can move or not.

They gave her the coordinates of the bishop in the chess board where the columns coordinates are between 'a' and 'h' inclusive and the rows are between '1' and '8' inclusive, if you need more clarification on how the bishop moves you can look at the notes.

Now, they want you to make a program to check if the number of moves that Nada told them are right or not.

## Input

The input will consist of two characters, the first one will be a character that describe the column between 'a' and 'h' inclusive, while the second input will be another character that describe the row between '1' and '8'.Which mean that if the input is "b8" it means the second column and the row number eight.

## Output

The output will be one line which contains the right number of moves of the bishop.

## Examples

### Example 1
**Input:**
```
a1
```

**Output:**
```
7
```

## Note

The bishop can move diagonally till the end of the board.

If you need more clarification on how the bishop moves you can look at the image below, where the black dots is the valid moves of the bishop on the board.

![image](https://espresso.codeforces.com/90a2381fd104efadf5dd04aba16804280ca12494.png)

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>

using namespace std;

signed main()
{
    int row,col,sum;
    char c,r;
    cin >> c>> r;

    col = c - 'a' + 1; 
    row = r - '0';

    sum = min(8 - row, 8 - col) +min(8 - row, col - 1)+min(row - 1, 8 - col)+min(row - 1, col - 1);

    cout << sum;
}
```
