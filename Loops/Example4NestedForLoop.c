/*
Program: Print star pattern using nested for loop
--------------------------------------------------

About Nested for Loop:
----------------------
→ A nested for loop means one loop inside another loop.

→ The outer loop controls the number of rows.
→ The inner loop controls the number of columns in each row.

Logic:
------
1. Outer loop runs 5 times (for 5 rows).
2. Inner loop runs 5 times (for 5 columns in each row).
3. In each inner loop iteration, print "* ".
4. After inner loop ends, move to next line using printf("\n").
*/

#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++)
    {
        // Inner loop for columns
        for(j = 1; j <= 5; j++)
        {
            printf("* ");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}

/*
Output:
--------------
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
Thank you for viewing the star pattern.
*/
