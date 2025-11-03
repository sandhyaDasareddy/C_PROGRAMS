/*
Program: Find the Sum of Odd Digits in a Given Number
-----------------------------------------------------

About:
------
→ This program finds and adds all odd digits in the given integer.

Logic:
------
1. Read a number from the user.
2. Extract each digit using modulus (% 10).
3. Check if the digit is odd.
4. If yes, add it to sum.
5. Divide the number by 10 after each step.
*/

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;      // Extract last digit
        if (digit % 2 != 0)    // Check odd
            sum = sum + digit;
        num = num / 10;        // Remove last digit
    }

    printf("Sum of odd digits = %d\n", sum);
    return 0;
}

/*
Output:
---------------
Enter a number: 57813
Sum of odd digits = 16
*/
