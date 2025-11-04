/*

Write a C program to illustrate a function with no arguments and no return value.

LOGIC / APPROACH:

1️. Function with No Arguments and No Return Value:
   - The function does not take any inputs (no parameters inside parentheses).
   - It also does not return any value to the calling function.
   - It simply performs an action, such as displaying a message or performing a calculation.

2️. Steps:
   - Declare the function (prototype) before main() using: void display();
   - Call the function inside main().
   - Define the function after main() with the code to print a message.
*/
#include <stdio.h>

// Function Declaration (Prototype)
void display();

int main()
{
    // Function Call — control goes to display() function
    display();
    
    return 0;
}

// Function Definition — no arguments, no return value
void display()
{
    printf("Hello, Namasthe!\n");  // Task performed by the function
}

/*
Output:-
-------
Hello, Namasthe!

*/