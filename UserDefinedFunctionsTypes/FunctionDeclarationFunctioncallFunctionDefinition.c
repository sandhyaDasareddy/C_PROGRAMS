/*

Write a C program to illustrate function declaration, function definition, and function call.

LOGIC / APPROACH:

1️. Function Declaration (Prototype):
   - It tells the compiler that a function exists and specifies its return type and parameters.
   - Example: int add(int, int);

2️. Function Definition:
   - It contains the actual body (statements) of the function — what the function does.

3️. Function Call:
   - It is used to invoke the function from main() or another function.
   - The program control transfers to the called function, executes it, and returns back.

Example Explanation:
   - We declare a function named add() that takes two integers and returns their sum.
   - In main(), we read two numbers, call add(a, b), and display the result.
*/


#include <stdio.h>

// Function Declaration (Prototype)
int add(int, int);

int main()
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function Call
    result = add(num1, num2);

    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function Definition
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}


/*
Output:-

Enter two numbers: 2 5
The sum of 2 and 5 is 7

*/