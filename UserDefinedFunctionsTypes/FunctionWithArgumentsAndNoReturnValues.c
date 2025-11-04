/*

Write a C program to illustrate a function with arguments and no return value.

LOGIC / APPROACH:

1️. Function with Arguments and No Return Value:
   - The function receives data (arguments) from the calling function.
   - It performs the required operation but does not return any value.
   - The output is displayed directly inside the function.

2️. Flow of Program:
   - The user enters two numbers in main().
   - main() passes these numbers as arguments to the function sum().
   - sum() receives them, performs addition, and displays the result.
*/
#include <stdio.h>

// Function Declaration (Prototype)
void sum(int, int);

int main()
{
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    // Function Call — passing arguments a and b
    sum(a, b);

    return 0;
}

// Function Definition — has arguments but no return value
void sum(int a, int b)
{
    int result = a + b;
    printf("Addition of two numbers: %d\n", result);
}


/*
Output:-
------
Enter 2 numbers: 3 5
Addition of two numbers: 8

*/