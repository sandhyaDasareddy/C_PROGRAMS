/*
Program: Print Multiplication Table of 1 to 10 in Linear Format
---------------------------------------------------------------

About the Program:
------------------
→ This program prints the multiplication table for numbers from 1 to 10.
→ It uses nested for loops.
→ Each line shows one number’s full table in the format: 
   1 x 1 = 1   1 x 2 = 2   ...   1 x 10 = 10
*/

#include <stdio.h>

int main()
{
    int i, j;

    // Logic:
    // Step 1: Outer loop for numbers 1 to 10
    // Step 2: Inner loop prints multiplication from 1 to 10 for each number
    // Step 3: Display in 1 x 1 = 1 format on the same line

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Move to next line for next number
    }

    return 0;
}

/*
Output:
--------
1 x 1 = 1    1 x 2 = 2    1 x 3 = 3    1 x 4 = 4    1 x 5 = 5    1 x 6 = 6    1 x 7 = 7    1 x 8 = 8    1 x 9 = 9    1 x 10 = 10
2 x 1 = 2    2 x 2 = 4    2 x 3 = 6    2 x 4 = 8    2 x 5 = 10   2 x 6 = 12   2 x 7 = 14   2 x 8 = 16   2 x 9 = 18   2 x 10 = 20
3 x 1 = 3    3 x 2 = 6    3 x 3 = 9    3 x 4 = 12   3 x 5 = 15   3 x 6 = 18   3 x 7 = 21   3 x 8 = 24   3 x 9 = 27   3 x 10 = 30
...
10 x 1 = 10  10 x 2 = 20  10 x 3 = 30  10 x 4 = 40  10 x 5 = 50  10 x 6 = 60  10 x 7 = 70  10 x 8 = 80  10 x 9 = 90  10 x 10 = 100

Thank you for checking the multiplication table program!
*/
