/*
Conditional (Ternary) Operator:-
------------------------------

Definition:-  The conditional operator is also known as the Ternary Operator because it works with three operands.
It is used as a short form of the if-else statement to make decisions in a single line.

Syntax:
-------
condition ? expression1 : expression2;
 

Explanation:
-------------

=> If the condition is true, then expression1 is executed.

=> If the condition is false, then expression2 is executed.

=> It works just like an if-else statement but in a single line.

Example:-
-------
int a = 10, b = 20;
int max;

max = (a > b) ? a : b;

Explanation:

Here, (a > b) is the condition.

If it is true → max = a.

If it is false → max = b.

So, since 10 > 20 is false, max = 20.


Note:--(The conditional operator just shortens this form!)

Equivalent if-else Statement:
if (a > b)
    max = a;
else
    max = b;

*/
#include <stdio.h>
int main()
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    printf("The greater number is: %d\n", max);

    return 0;
}

/*
Output:-
-------
Enter two numbers: 1 5
The greater number is: 5
*/