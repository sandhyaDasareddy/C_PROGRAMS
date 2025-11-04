/*

Write a C program to illustrate a function with no arguments but with return value.

LOGIC / APPROACH:

1️. Function with No Arguments but with Return Value:
   - The function does not take any input (no parameters).
   - It performs the necessary operation inside the function itself.
   - It then returns the result to the calling function using the 'return' statement.

2️ .Flow of Program:
   - main() calls the function subtractionOfTwoNumbers().
   - The function itself reads two numbers from the user.
   - It calculates the subtraction and returns the result.
   - main() receives and displays the returned value.
*/
#include <stdio.h>

// Function Declaration (Prototype)
int subtractionOfTwoNumbers();

int main()
{
    // Function Call — returns a value, which is printed directly
    printf("Subtraction of two numbers: %d\n", subtractionOfTwoNumbers());

    return 0;
}

// Function Definition — no arguments, but returns a value
int subtractionOfTwoNumbers()
{
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    // Ensure positive subtraction result
    if (a > b)
        return a - b;
    else
        return b - a;
}


/*
Output:-
------
Enter 2 numbers: 56 98
Subtraction of two numbers: 42

*/