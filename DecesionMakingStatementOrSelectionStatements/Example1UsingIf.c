/*
Program: Check Whether a Person Passed in Board Exams Using Simple if
---------------------------------------------------------------------

About if Statement:
-------------------
→ The 'if' statement is used to test a condition.
→ If the condition is TRUE, the block of code inside 'if' executes.
→ If the condition is FALSE, that block is skipped.

Syntax:
    if (condition)
    {
        // statements
    }
*/

#include <stdio.h>

int main()
{
    int marks;

    // Step 1: Read marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Step 2: Check if marks are greater than or equal to 35
    /* If marks >= 35 is TRUE, then the student has passed. */
    if (marks >= 35)
    {
        printf("Congratulations! You have passed the exam.\n");
    }

    // Step 3: Display thank-you message
    printf("Thank you for checking your result status.\n");

    return 0;
}

/*
Output 1:
---------

case-1:
Enter your marks: 37
Congratulations! You have passed the exam.
Thank you for checking your result status.

case-2:
Enter your marks: 34
Thank you for checking your result status.
*/
