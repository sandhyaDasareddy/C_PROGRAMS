/*
Program: Find the Largest Among Three Numbers Using Nested if...else
-------------------------------------------------------------------

About:
------
→ This program uses nested if...else statements to determine
   the largest number among three input values.

Logic:
------
1. Read three numbers from the user.
2. Check if a is greater than b.
   - If true, then compare a and c.
   - Otherwise, compare b and c.
3. Print the largest number accordingly.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    // Step 1: Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Step 2: Compare using nested if...else
    if (a > b)
    {
        if (a > c)
            printf("%d is the largest number.\n", a);
        else
            printf("%d is the largest number.\n", c);
    }
    else
    {
        if (b > c)
            printf("%d is the largest number.\n", b);
        else
            printf("%d is the largest number.\n", c);
    }

    return 0;
}

/*
Output:
---------------
Enter three numbers: 7 8 9
9 is the largest number.
*/
