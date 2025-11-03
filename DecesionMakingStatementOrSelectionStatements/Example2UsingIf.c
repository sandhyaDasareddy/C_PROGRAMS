/*
Program: Check Whether a Given Number is Positive, Negative, or Zero Using Simple if
------------------------------------------------------------------------------------

Header File Explanation:
------------------------
#include <stdio.h>
→ This header file is used for standard input and output functions such as printf() and scanf().

About if Statement:
-------------------
→ The 'if' statement is used to test a condition.
→ If the condition is TRUE, then only that block of code is executed.
→ In this program, we use three simple if statements separately to check:
   1. Whether the number is positive.
   2. Whether the number is negative.
   3. Whether the number is zero.
*/

#include <stdio.h>

int main()
{
    int num;

    // Step 1: Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Check conditions using simple if statements

    /* If number is greater than 0, then it is positive */
    if (num > 0)
    {
        printf("The number is Positive.\n");
    }

    /* If number is less than 0, then it is negative */
    if (num < 0)
    {
        printf("The number is Negative.\n");
    }

    /* If number is equal to 0 */
    if (num == 0)
    {
        printf("The number is Zero.\n");
    }

    // Step 3: Display thank-you message
    printf("Thank you for checking your number status.\n");

    return 0;
}

/*
case-1:
---------
Enter a number: 5
The number is Positive.
Thank you for checking your number status.

case-2:
---------
Enter a number: -5
The number is Negative.
Thank you for checking your number status.

case-3:
---------
Enter a number: 0
The number is Zero.
Thank you for checking your number status.
*/
