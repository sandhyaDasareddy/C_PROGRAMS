/*

Program: Evaluate Expression c = a + b * a - 5 % 10
---------------------------------------------------
Definition:
Expression evaluation means calculating the result of a mathematical expression
based on operator precedence.

Given:
a = 10, b = 65

Expression:
c = a + b * a - 5 % 10

Operator Precedence:
1. * and %  (evaluated first)
2. + and -  (evaluated next)
*/

#include <stdio.h>

int main()
{
    int a = 10, b = 65, c;

    c = a + b * a - 5 % 10;

    printf("The value of c = %d", c);

    return 0;
}
