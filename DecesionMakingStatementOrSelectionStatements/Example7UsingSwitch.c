/*
Program: Display Grade Using Switch Case
----------------------------------------

About Switch Statement:
-----------------------
→ The switch statement is used to perform different actions based on the value of an expression.
→ It is a good alternative to multiple if–else conditions.
→ Each case value is matched, and the corresponding block is executed.

Logic:
------
1. Input the grade character from the user (A, B, C, D, F).
2. Use switch to check the grade:
     Case 'A' → Excellent
     Case 'B' → Good
     Case 'C' → Average
     Case 'D' → Pass
     Case 'F' → Fail
3. Use default to handle invalid grade input.
*/

#include <stdio.h>

int main()
{
    char grade;

    // Step 1: Input grade from user
    printf("Enter your grade (A/B/C/D/F): ");
    scanf(" %c", &grade);  // Note: Space before %c to skip whitespace

    // Step 2: Use switch to display message
    switch (grade)
    {
        case 'A':
        case 'a':
            printf("Excellent! Keep it up!\n");
            break;

        case 'B':
        case 'b':
            printf("Very Good! You did well.\n");
            break;

        case 'C':
        case 'c':
            printf("Good! Try to improve next time.\n");
            break;

        case 'D':
        case 'd':
            printf("You have passed. Work harder next time.\n");
            break;

        case 'F':
        case 'f':
            printf("You have failed. Better luck next time.\n");
            break;

        default:
            printf("Invalid grade entered!\n");
    }

    // Step 3: Thank-you message
    printf("Thank you for checking your grade status.\n");

    return 0;
}

/*
case-1:
----------------
Enter your grade (A/B/C/D/F): A
Excellent! Keep it up!
Thank you for checking your grade status.

case-2:
----------------
Enter your grade (A/B/C/D/F): f
You have failed. Better luck next time.
Thank you for checking your grade status.
*/
