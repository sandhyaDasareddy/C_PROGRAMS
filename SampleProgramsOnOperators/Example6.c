/*
Program: Convert Temperature from Celsius to Fahrenheit
--------------------------------------------------------

Definition:
This program converts the given temperature in Celsius into Fahrenheit using the formula:

Formula:
F = (C × 9/5) + 32
*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}

/*
Output:-
-------
Enter temperature in Celsius: 34
Temperature in Fahrenheit = 93.20
*/