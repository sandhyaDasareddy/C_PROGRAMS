/*
Program: Print numbers from 0 to 5 and find their sum using do-while loop
-------------------------------------------------------------------------

About do-while Loop:
--------------------
→ The do-while loop executes the statements at least once before checking the condition.

→ Syntax:
   do
   {
       // statements
   } while(condition);

Logic:
------
1. Initialize i = 0 and sum = 0.
2. Use do-while loop to:
      - Print the current value of i.
      - Add i to sum.
      - Increment i by 1.
3. The loop continues until i > 5.
4. After the loop ends, display the sum of all numbers.
*/

#include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    printf("Numbers from 0 to 5 are:\n");

    // Step 1: Loop starts
    do
    {
        printf("%d ", i);   // Print current number
        sum = sum + i;      // Add to sum
        i++;                // Increment i
    }
    while(i <= 5);          // Step 2: Condition check

    // Step 3: Display final result
    printf("\nSum of values from 0 to 5 = %d\n", sum);

    return 0;
}

/*
Output:
--------------
Numbers from 0 to 5 are:
0 1 2 3 4 5
Sum of values from 0 to 5 = 15
Thank you for checking your result.
*/
