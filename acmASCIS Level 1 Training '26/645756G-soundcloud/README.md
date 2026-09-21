# [645756G] SoundCloud

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/G](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/G)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348149316](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348149316)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 61 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# G. SoundCloud

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/G](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/G)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Kamal listens to music on SoundCloud alot, everywhere and at any time.

This annoys his friends. They say that he spends all his time listening to music and he quit doing anything else useful.

Kamal is bored from their advice to stop listening to music and decided to challenge them. If Kamal's friends win the challenge, Kamal will stop listening to music forever.

Kamal will start listening to his favorite playlist - which includes 20 songs, starting from song #1, but he made a mistake and told his friends that he will listen to N songs from the playlist (repetitions included).

Kamal's friends want to know the number of the last song Kamal listened to, after N Songs.

Help Kamal's friends win the challenge.

## Input

The input consist of N, the number of songs Kamal will listen to (1 ≤ N ≤ 1000). Then N characters follow:

- '*' means Kamal is listening to the current song.

- '>' means Kamal skipped the current song and will listen to the next song.

- '<' means Kamal repeated the last song.

The first character of the N number of characters will be either '*' or '>'.

## Output

Print the number (in the playlist) of the last song Kamal has listened to after N songs.

## Examples

### Example 1
**Input:**
```
7
*******
```

**Output:**
```
7
```

## Note

- Kamal may play the playlist many times.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;int counter =0;
    char b;

    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin >> b;
        if(b == '*')counter++;
        else if(b == '>') counter = counter +2;
        if( counter > 20)
        {
            counter =counter -20;
        }
    }
    cout << counter;
}
```
