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