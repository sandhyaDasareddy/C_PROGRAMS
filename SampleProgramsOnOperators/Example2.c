/*
Program: Check Voting Eligibility Using Conditional Operator
------------------------------------------------------------

Definition:
The conditional (ternary) operator ?: is used as a short form of if-else.

Syntax:
(condition) ? expression_if_true : expression_if_false;

In this program, if the age is 18 or more, the person is eligible to vote.
Otherwise, they are not eligible.
*/

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");

    return 0;
}
