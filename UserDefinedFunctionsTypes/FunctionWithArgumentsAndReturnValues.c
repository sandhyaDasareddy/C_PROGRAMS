/*

Write a C program to illustrate a function with arguments and return value.

LOGIC / APPROACH:

1️. Function with Arguments and Return Value:
   - The function receives data (arguments) from the calling function.
   - It performs a specific operation.
   - It then returns a result (value) back to the calling function using the 'return' statement.

2️. Flow of Program:
   - main() reads two numbers from the user.
   - These values are passed to the function largestOfTwoNumbers(a, b).
   - The function compares both numbers and returns the larger one.
   - main() receives the returned value and displays it.
*/
#include <stdio.h>

// Function Declaration (Prototype)
int largestOfTwoNumbers(int, int);

int main()
{
    int a, b, res;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    // Function Call — passing arguments and receiving returned value
    res = largestOfTwoNumbers(a, b);

    // Display the result
    printf("Largest of two numbers is: %d\n", res);

    return 0;
}

// Function Definition — has arguments and returns a value
int largestOfTwoNumbers(int a, int b)
{
    if (a > b)
        return a;   // Return the larger number
    else
        return b;   // Return the other number
}


/*
Output:-
------
Enter 2 numbers: 62 37
Largest of two numbers is: 62


*/