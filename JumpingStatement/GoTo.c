/*
Program: Check whether a number is Even or Odd using 'goto' statement
---------------------------------------------------------------------

About 'goto':
--------------
→ The 'goto' statement is used to jump to a specific labeled statement 
  within the same function.

Logic:
------
1. Read a number from the user.
2. If the number is divisible by 2 → jump to label 'even'.
3. Otherwise → jump to label 'odd'.
*/

#include <stdio.h>

int main()
{
    int num;

    // Step 1: Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Check divisibility using if condition
    if (num % 2 == 0)
        goto even;   // Jump to even label
    else
        goto odd;    // Jump to odd label

even:
    // Step 3: Print if even
    printf("%d is an Even number.\n", num);
    return 0;

odd:
    // Step 4: Print if odd
    printf("%d is an Odd number.\n", num);
    return 0;
}

/*
case-1:
----------
Enter a number: 8
8 is an Even number.
case-2:
----------
Enter a number: 5
5 is an Odd number.
*/
