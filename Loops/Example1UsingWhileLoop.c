/*
Program: Print numbers from 0 to 9 and find their sum using while loop
-----------------------------------------------------------------------

Header File Explanation:
------------------------
#include <stdio.h>
→ Used for standard input/output functions like printf() and scanf().

About While Loop:
-----------------
→ A while loop is used when the number of iterations is not fixed.
→ It checks the condition before executing the block of code.
→ Syntax:
     while(condition)
     {
         // statements
     }

Logic:
------
1. Initialize variable i = 0 and sum = 0.
2. While i <= 9:
      - Print the number.
      - Add the number to sum.
      - Increment i by 1.
3. After loop ends, print the total sum.
*/

#include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    // Step 1: Print numbers from 0 to 9
    printf("Numbers from 0 to 9 are:\n");

    while(i <= 9)
    {
        printf("Value = %d\n", i);   // Print current number
        sum = sum + i;      // Add current number to sum
        i++;                // Increment counter
    }

    // Step 2: Display the sum of digits
    printf("\nSum of digits from 0 to 9 = %d\n", sum);


    return 0;
}

/*
Output:-
-------

*/
