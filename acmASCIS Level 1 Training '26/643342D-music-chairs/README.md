# [643342D] Music Chairs

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345415049](https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345415049)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Music Chairs

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/D)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

At some point a lot of children knew the so called game "Music Chairs". However we are not going through the exact game but something similar.

In some school far away there was a boy who forgot his homework at home. His teacher decided to punish him by doing some exercises. He took *N* chairs and put them together to form a circle such that 

![image](https://espresso.codeforces.com/33fd769aef8b1945fb7b57cdc0f726cae426eceb.png)

 is next to 

![image](https://espresso.codeforces.com/28e7f8691300523b943f080c278dcb96ca239877.png)

, 

![image](https://espresso.codeforces.com/28e7f8691300523b943f080c278dcb96ca239877.png)

 is next to 

![image](https://espresso.codeforces.com/54394eee4eb20bbec8b0deb244cac2c18c94dd5b.png)

 .. and 

![image](https://espresso.codeforces.com/66e1a2a9b57e623058010fb4793955c9d928234d.png)

 is next to 

![image](https://espresso.codeforces.com/33fd769aef8b1945fb7b57cdc0f726cae426eceb.png)

. Here is a picture of 6 chairs.

![image](https://espresso.codeforces.com/4cfac8b5206885cf5a9ee052097c020f7040b8ad.png)

He asked the boy to sit on some 

![image](https://espresso.codeforces.com/d87e7e71dadc611cae96b052dd68697388568495.png)

 then to go around chair by chair *M* times. so if he was on chair 

![image](https://espresso.codeforces.com/d87e7e71dadc611cae96b052dd68697388568495.png)

 he will go to 

![image](https://espresso.codeforces.com/4b6011b677ca07012b4bff507beccacb4c447d06.png)

 and so on.

If he reaches the last chair (

![image](https://espresso.codeforces.com/66e1a2a9b57e623058010fb4793955c9d928234d.png)

) , the next chair will be the first one (

![image](https://espresso.codeforces.com/33fd769aef8b1945fb7b57cdc0f726cae426eceb.png)

).

He stops after *M* moves. The teacher wanted to test the boy as well, so he told him that if *M* was an odd number he should go around *M* + 1 times and just *M* times otherwise.

The teacher left the room and the boy was tired. Can you help him to determine which chair he will end up on so he goes right to it and wait his teacher?

![image](https://espresso.codeforces.com/6d023f9c8da64d33ae9f009330bac7a6b9c83af6.png)

## Input

You will be given 3 integer numbers *N*, *M*, *X* , The number of chairs, the number of times the boy should move and the first chair he will start from respectively ( 1  ≤  *X*  ≤  *N* < 263 , 0  ≤  *M* < 263 )

## Output

Output a single integer the number of chair he should reach at last.

## Examples

### Example 1
**Input:**
```
6 4 5
```

**Output:**
```
3
```

## Note

Here is the explanation of test 1:

At first the boy is standing by 

![image](https://espresso.codeforces.com/5ebfc1f782c7867cf6549247127d98d9a6b3f665.png)

.

![image](https://espresso.codeforces.com/f57189107a24229d1f691e0c871013ad2cffba07.png)

After 1 move, he will be standing by 

![image](https://espresso.codeforces.com/d14f11cd71a06a409104931865cff14858e78c9b.png)

.

![image](https://espresso.codeforces.com/745d98e9c3daf4d070024647fc9b6d686f979702.png)

After another move, he will be standing by 

![image](https://espresso.codeforces.com/33fd769aef8b1945fb7b57cdc0f726cae426eceb.png)

.

![image](https://espresso.codeforces.com/8c724a101aa1947cd6bfe226be64620547c39b35.png)

After another one, he will be standing by 

![image](https://espresso.codeforces.com/28e7f8691300523b943f080c278dcb96ca239877.png)

.

![image](https://espresso.codeforces.com/9c0d59c589111476aa9fd89ac51a38e9e70f4271.png)

After the last move (the 4*th* one), he will be standing by 

![image](https://espresso.codeforces.com/54394eee4eb20bbec8b0deb244cac2c18c94dd5b.png)

.

![image](https://espresso.codeforces.com/7c4b5469eba079d3793f942efaf7d964c62c205d.png)

So the answer is 3.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    unsigned long long x,n,m;
    cin >> n >> m >> x;
    

    if(m % 2 != 0)
    {
        m++;
    }
    m = m %n;
    if(x+m > n)
    {
        cout << (x + m) - n;

    }
    else if(x+m < n)
    {
        cout << x+m;
    }
    else if (x+m==n)
    {
        cout << n;
    }
}
```
