/*
Program: Find Grade of a Student Using Nested if–else
-----------------------------------------------------

About Nested if–else Statement:
-------------------------------
→ In nested if–else, one if statement is written inside another if or else block.
→ It helps check multiple conditions step-by-step.

Logic:
------
1. Input the student’s marks.
2. If marks are greater than or equal to 35 → student passed.
     Inside this block:
       - If marks < 50 → Grade C
       - Else if marks < 75 → Grade B
       - Else if marks < 90 → Grade A
       - Else → Grade A+
3. If marks are less than 35 → student failed.
*/

#include <stdio.h>

int main()
{
    int marks;

    // Step 1: Input marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Step 2: Check pass/fail using nested if–else
    if (marks >= 35)
    {
        printf("You have PASSED the exam.\n");

        // Nested conditions to find grade
        if (marks < 50)
        {
            printf("Your Grade is C.\n");
        }
        else if (marks < 75)
        {
            printf("Your Grade is B.\n");
        }
        else if (marks < 90)
        {
            printf("Your Grade is A.\n");
        }
        else if (marks <= 100)
        {
            printf("Excellent! Your Grade is A+.\n");
        }
        else
        {
            printf("Invalid marks entered! Marks cannot exceed 100.\n");
        }
    }
    else
    {
        printf("You have FAILED the exam.\n");
    }

    // Step 3: Thank-you message
    printf("Thank you for checking your grade status.\n");

    return 0;
}

/*
case-1:
----------------
Enter your marks: 82
You have PASSED the exam.
Your Grade is A.
Thank you for checking your grade status.

case-2:
----------------
Enter your marks: 40
You have PASSED the exam.
Your Grade is C.
Thank you for checking your grade status.

case-3:
----------------
Enter your marks: 25
You have FAILED the exam.
Thank you for checking your grade status.
*/
