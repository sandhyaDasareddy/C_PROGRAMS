/*
Program: Addition of Two Numbers using Pointers
-----------------------------------------------
Concept:
---------
A pointer is a variable that stores the address of another variable.
Using pointers, we can access and manipulate variable values indirectly.

Key Points:
------------
1. '&' (Address-of Operator) gives the address of a variable.
2. '*' (Indirection/Dereference Operator) accesses the value stored at that address.
3. Pointers can be used to perform arithmetic operations on the values of variables.

Steps in this program:
-----------------------
1. Input two integer numbers.
2. Declare two pointer variables and store the addresses of those integers.
3. Access the values of x and y using *ptr1 and *ptr2.
4. Add them and display the result.

Syntax Reminder:
-----------------
datatype *pointer_name;
Example: int *p;
*/

#include<stdio.h>

int main()
{
    int x, y, res;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &x, &y);

    printf("\nGiven numbers are:\n");
    printf("x = %d\ny = %d\n", x, y);

    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("\nAddress of variables:\n");
    printf("x = %p\ny = %p\n", ptr1, ptr2);

    res = *ptr1 + *ptr2;

    printf("\nAddition of 2 numbers using addresses = %d\n", res);

    return 0;
}
