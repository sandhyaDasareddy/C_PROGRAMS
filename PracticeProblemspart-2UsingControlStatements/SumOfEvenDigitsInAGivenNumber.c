/*
Program: Find the Sum of Even Digits in a Given Number
------------------------------------------------------

About:
------
→ This program finds and adds all even digits in the given integer.

Logic:
------
1. Read a number from the user.
2. Extract each digit using modulus (% 10).
3. Check if the digit is even.
4. If yes, add it to sum.
5. Divide the number by 10 in each loop.
6. Display the sum of even digits.
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
        if (digit % 2 == 0)    // Check even
            sum = sum + digit;
        num = num / 10;        // Remove last digit
    }

    printf("Sum of even digits = %d\n", sum);
    return 0;
}

/*
Output:
---------------
Enter a number: 7852
Sum of even digits = 10
*/
