/*
Program: Reverse a Given Integer Number
---------------------------------------

About:
------
→ This program reverses the digits of a given integer number.

Logic:
------
1. Read the number from the user.
2. Extract the last digit using modulus (%) operator.
3. Add the digit to the reversed number.
4. Remove the last digit from the original number using division (/).
5. Repeat steps 2–4 until the number becomes 0.
6. Display the reversed number.
*/

#include <stdio.h>

int main()
{
    int num, rev = 0, rem;

    // Step 1: Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Step 2: Repeat until number becomes 0
    while (num != 0)
    {
        rem = num % 10;          // Get last digit
        rev = rev * 10 + rem;    // Add digit to reversed number
        num = num / 10;                // Remove last digit
    }

    // Step 3: Display reversed number
    printf("Reversed number = %d\n", rev);
    return 0;
}

/*
Sample Output:
---------------
Enter an integer: 456
Reversed number = 654

*/