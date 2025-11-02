/*
Program: Check Whether the Given Number is Positive, Negative, or Zero Using if–else if
---------------------------------------------------------------------------------------

Header File Explanation:
------------------------
#include <stdio.h>
→ Used for standard input and output functions like printf() and scanf().

About if–else if–else Statement:
--------------------------------
→ The if–else if ladder is used when we have **multiple conditions** to test.
→ The conditions are checked one by one, and the first true condition’s block executes.
→ If none are true, the final 'else' block executes.

Logic:
------
1. Input a number from the user.
2. Check conditions:
      if (num > 0)
          print "Number is positive"
      else if (num < 0)
          print "Number is negative"
      else
          print "Number is zero"
*/

#include <stdio.h>

int main()
{
    int num;

    // Step 1: Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Check whether the number is positive, negative, or zero
    if (num > 0)
    {
        printf("The number is Positive.\n");
    }
    else if (num < 0)
    {
        printf("The number is Negative.\n");
    }
    else
    {
        printf("The number is Zero.\n");
    }

    // Step 3: Display thank-you message
    printf("Thank you for checking your number status.\n");

    return 0;
}

/*
Sample Output 1:
----------------
Enter a number: 25
The number is Positive.
Thank you for checking your number status.

Sample Output 2:
----------------
Enter a number: -15
The number is Negative.
Thank you for checking your number status.

Sample Output 3:
----------------
Enter a number: 0
The number is Zero.
Thank you for checking your number status.
*/
