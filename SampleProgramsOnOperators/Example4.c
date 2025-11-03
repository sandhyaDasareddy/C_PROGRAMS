/*
Program: Check whether a given number is Even or Odd using Conditional Operator
-------------------------------------------------------------------------------

Definition:
The conditional (ternary) operator ?: is used as a shorthand for if-else.

Syntax:
(condition) ? expression_if_true : expression_if_false;

Logic:
If a number is divisible by 2, it is even; otherwise, it is odd.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("The number is Even\n") : printf("The number is Odd\n");

    return 0;
}

/*
Output:-
-------
Enter a number: 4
The number is Even
*/