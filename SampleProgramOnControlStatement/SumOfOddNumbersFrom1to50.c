/*
Program: Find the Sum of Odd Numbers from 1 to 50
--------------------------------------------------

About Odd Numbers:
------------------
→ Odd numbers are numbers that are not divisible by 2.
→ Example: 1, 3, 5, 7, 9, ...

Logic:
------
1. Initialize a variable `sum` to 0.
2. Use a loop to go from 1 to 50.
3. Inside the loop, check if the number is odd using (i % 2 != 0).
4. If it is odd, add it to `sum`.
5. After the loop, display the total sum.
*/

#include <stdio.h>

int main()
{
    int i, sum = 0;

    // Step 1: Use a loop to iterate from 1 to 50
    for (i = 1; i <= 50; i++)
    {
        // Step 2: Check if number is odd
        if (i % 2 != 0)
        {
            sum = sum + i; // Step 3: Add odd numbers to sum
        }
    }

    // Step 4: Display result
    printf("Sum of odd numbers from 1 to 50 = %d\n", sum);

    return 0;
}

/*
Output:
--------------
Sum of odd numbers from 1 to 50 = 625
Thank you for checking the sum of odd numbers.
*/
