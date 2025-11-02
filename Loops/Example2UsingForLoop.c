/*
Program: Print numbers from 0 to 5 and find their sum using for loop
-----------------------------------------------------------------------

About For Loop:
---------------
→ The for loop is used when we know exactly how many times a statement should execute.

→ Syntax:
   for(initialization; condition; increment/decrement)
   {
       // statements
   }

Logic:
------
1. Initialize sum = 0.
2. Use for loop to iterate i from 0 to 5.
3. In each iteration:
      - Print the value of i.
      - Add i to sum.
4. After the loop ends, print the total sum.
*/

#include <stdio.h>

int main()
{
    int i, sum = 0;

    // Step 1: Print numbers from 0 to 5
    printf("Numbers from 0 to 5 are:\n");

    for(i = 0; i <= 5; i++)
    {
        printf("%d ", i);   // Print current number
        sum = sum + i;      // Add current number to sum
    }

    // Step 2: Display the total sum
    printf("\nSum of values from 0 to 5 = %d\n", sum);

    return 0;
}

/*
Sample Output:
--------------
Numbers from 0 to 5 are:
0 1 2 3 4 5
Sum of values from 0 to 5 = 15
Thank you for checking your result.
*/
