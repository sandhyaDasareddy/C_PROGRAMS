/*
Program: Find the Largest of Three Numbers Using Conditional Operator and Logical AND
------------------------------------------------------------------------------------

Definition:
This program finds the largest among three numbers using the conditional (ternary) operator (? :) 
along with the logical AND (&&) operator.

Logic:
1. If (a > b && a > c) → then 'a' is the largest.
2. Else if (b > c) → then 'b' is the largest.
3. Otherwise, 'c' is the largest.

Expression used:
largest = (a > b && a > c) ? a : (b > c ? b : c);
*/

#include <stdio.h>
int main()
{
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Logic using conditional and logical AND operators
    largest = (a > b && a > c) ? a : (b > c ? b : c);

    printf("The largest number is: %d", largest);

    return 0;
}
