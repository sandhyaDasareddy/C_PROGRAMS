/*
Program: Check Whether a Student is Passed or Failed
----------------------------------------------------

About if–else Statement:
------------------------
→ The if–else statement helps to make a decision based on a condition.
→ If the condition is true → the 'if' block executes.
→ Otherwise → the 'else' block executes.

Logic:
------
1. Input the student's marks.
2. If marks are greater than or equal to 35 → student is passed.
3. Otherwise → student is failed.
*/

#include <stdio.h>

int main()
{
    int marks;

    // Step 1: Input marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Step 2: Check if the student has passed or failed
    if (marks >= 35)
    {
        printf("Congratulations! You have PASSED the exam.\n");
    }
    else
    {
        printf("Sorry! You have FAILED the exam.\n");
    }

    // Step 3: Display thank-you message
    printf("Thank you for checking your exam result status.\n");

    return 0;
}

/*
Sample Output 1:
----------------
Enter your marks: 78
Congratulations! You have PASSED the exam.
Thank you for checking your exam result status.

Sample Output 2:
----------------
Enter your marks: 25
Sorry! You have FAILED the exam.
Thank you for checking your exam result status.
*/
