/*
Program: Find the Largest Among Three Numbers Using if and Logical AND (&&)
--------------------------------------------------------------------------

About:
------
→ This program finds the largest number among three inputs using 
   the logical AND (&&) operator inside simple if conditions.

Logic:
------
1. Read three numbers from the user.
2. If (a > b && a > c) → 'a' is the largest.
3. Else if (b > a && b > c) → 'b' is the largest.
4. Otherwise → 'c' is the largest.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    // Step 1: Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Step 2: Compare using if and &&
    if (a > b && a > c)
        printf("%d is the largest number.\n", a);
    else if (b > c)
        printf("%d is the largest number.\n", b);
    else
        printf("%d is the largest number.\n", c);

    return 0;
}

/*
Sample Output:
---------------
Enter three numbers: 12 45 33
45 is the largest number.
Thank you for checking the largest number using if and &&.
*/
