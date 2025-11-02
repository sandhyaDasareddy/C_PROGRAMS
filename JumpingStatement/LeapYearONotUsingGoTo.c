/*
Program: Check whether a given year is a Leap Year or not using 'goto' statement
-------------------------------------------------------------------------------

About 'goto':
--------------
→ The 'goto' statement allows program control to jump to a labeled section 
  of code within the same function.

Logic:
------
1. Read a year from the user.
2. A year is a leap year if:
      - It is divisible by 4 and not divisible by 100, OR
      - It is divisible by 400.
3. If the condition is true, jump to 'leap' label.
4. Otherwise, jump to 'notleap' label.
*/

#include <stdio.h>

int main()
{
    int year;

    // Step 1: Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Step 2: Check leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        goto leap;     // Jump to leap label if true
    else
        goto notleap;  // Jump to notleap label if false

leap:
    // Step 3: Print leap year message
    printf("%d is a Leap Year.\n", year);
    return 0;

notleap:
    // Step 4: Print not a leap year message
    printf("%d is NOT a Leap Year.\n", year);
    return 0;
}

/*
Output 1:
----------
Enter a year: 2024
2024 is a Leap Year.
Thank you for checking leap year status using goto.

Output 2:
----------
Enter a year: 2023
2023 is NOT a Leap Year.
Thank you for checking leap year status using goto.
*/
