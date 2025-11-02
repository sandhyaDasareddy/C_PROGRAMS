/*
Program: Check Whether the Given Number is Greater Than 10 or Not Using if-else
-------------------------------------------------------------------------------

About if-else Statement:
------------------------
→ The 'if-else' statement is used to make decisions in C programming.
→ If the condition in 'if' is TRUE, the 'if' block executes.
→ Otherwise, the 'else' block executes.

Logic:
------
1. Input a number from the user.
2. Check the condition:
      if (num > 10)
          print "Number is greater than 10"
      else
          print "Number is not greater than 10"
*/

#include <stdio.h>

int main()
{
    int num;

    // Step 1: Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Check whether the number is greater than 10 using if-else
    if (num > 10)
    {
        printf("The number is greater than 10.\n");
    }
    else
    {
        printf("The number is not greater than 10.\n");
    }

    // Step 3: Display thank-you message
    printf("Thank you for checking your number status.\n");

    return 0;
}

/*
Sample Output 1:
----------------
Enter a number: 25
The number is greater than 10.
Thank you for checking your number status.

Sample Output 2:
----------------
Enter a number: 8
The number is not greater than 10.
Thank you for checking your number status.
*/
