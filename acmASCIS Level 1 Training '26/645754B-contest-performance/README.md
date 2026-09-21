# [645754B] Contest Performance

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/346682758](https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/346682758)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 187 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Contest Performance

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$OOZ$ likes participating in contests. $OOZ$ is greedy, he only wants his performance in the contests to either get better or stay the same, he doesn't like it when his performance decreases.

$OOZ$ built an AI to help him predict his performance in each contest before he participates in it. $OOZ$ knows that there will be $n$ contests in the future, and thanks to his AI, he knows what will his performance be in each contest.

$OOZ$ will choose some consecutive contests and participate in them in such a way that his performance doesn't decrease at any point during his participation. Can you tell $OOZ$ what is the maximum number of contests he can participate in if he chooses optimally?

## Input

The first line of input contains a single integer $t$ $(1 \leq t \leq 10^5)$ – the number of test cases.

Each test case consists of 2 lines:

The first line contains an integer $n$ $(1 \leq n \leq 10^5)$ – the number of contests.

The second line contains $n$ integers $a_i$ $(1 \leq a_i \leq 10^5)$ – the predicted performance in the $i-th$ contest.

It's guaranteed that the sum of $n$ over all test cases is less than to equal to $10^5$.

## Output

For each test case, output a single integer, the maximum number of contests $OOZ$ can participate in if he chooses optimally.

## Examples

### Example 1
**Input:**
```
1
6
1 2 1 4 5 4
```

**Output:**
```
3
```

## Note

In the first sample: The most optimal way is for $OOZ$ to participate in the third, fourth, and fifth contest, his rating start at $1$ then increases to $4$, and then $5$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
    #include <iostream>

    using namespace std;

    int main()
    {
        int t,n,a,x;
        int l =0;
        int z =0;
        cin >> t;
        for(int i =0; i< t ; i++)
        {
            x=0;
            l=0;
            cin >> n;
            for(int k=0; k<n ; k++)
            {
                cin >> a;
                if(a >= z)
                {
                    x++;
                    if(x >= l)
                    {
                        l = x;
                        
                    }
                    
                }                  
                    
                else if( a <z )
                {
                        x=1;
                }
                z = a;
            }
           cout << l<< endl;
           z=0;
        }

     
    }
```
