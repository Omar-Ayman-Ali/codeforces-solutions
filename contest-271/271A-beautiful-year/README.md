# [271A] Beautiful Year

- **Problem Link:** [https://codeforces.com/contest/271/problem/A](https://codeforces.com/contest/271/problem/A)
- **Submission ID:** [https://codeforces.com/contest/271/submission/380164704](https://codeforces.com/contest/271/submission/380164704)
- **Rating:** 800
- **Tags:** brute force
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Beautiful Year

- **Problem Link:** [https://codeforces.com/contest/271/problem/A](https://codeforces.com/contest/271/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

## Input

The single line contains integer *y* (1000 ≤ *y* ≤ 9000) — the year number.

## Output

Print a single integer — the minimum year number that is strictly larger than *y* and all it's digits are distinct. It is guaranteed that the answer exists.

## Examples

### Example 1
**Input:**
```
1987
```

**Output:**
```
2013
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;

    // We can just use an infinite loop and break when we find the answer
    while (true)
    {
        y++; // Move to the next year immediately
        
        int temp = y;
        int arr[4] = {};
        int i = 0; // Initialize OUTSIDE the extraction loop
        
        // 1. Extract the digits
        while (temp > 0)
        {
            arr[i] = temp % 10;
            temp /= 10;
            i++;
        }
        
        bool has_duplicate = false;
        
        // 2. Check for matching digits
        for (int j = 0; j < 4; j++)
        {   
            for (int k = j + 1; k < 4; k++)
            {
                if (arr[j] == arr[k])
                {
                    has_duplicate = true; // Found a match!
                }
            }
        }
        
        // 3. If no duplicates were found, we have our answer
        if (has_duplicate == false)
        {
            cout << y << "\n"; // Print y, not the reduced temp variable
            break; // Exit the infinite while loop
        }
    }
    
    return 0;
}
```
