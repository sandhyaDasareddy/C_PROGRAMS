/*
Program: Find the Average of Two Numbers
----------------------------------------

Definition:
This program calculates the average of two numbers entered by the user.

Formula:
Average = (a + b) / 2
*/

#include <stdio.h>

int main()
{
    float a, b, average;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    average = (a + b) / 2;

    printf("Average = %.2f", average);

    return 0;
}
