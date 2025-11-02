/*
Program: Demonstrate sizeof Operator in C
-----------------------------------------

Definition:
The sizeof operator is used to determine the memory size (in bytes) occupied
by a data type or variable.

It helps programmers understand how much memory different data types consume.
*/

#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("Size of int = %lu bytes\n", sizeof(a));
    printf("Size of float = %lu bytes\n", sizeof(b));
    printf("Size of char = %lu bytes\n", sizeof(c));
    printf("Size of double = %lu bytes\n", sizeof(d));

    printf("\nSizes of Data Types directly:\n");
    printf("Size of int = %lu bytes\n", sizeof(int));
    printf("Size of float = %lu bytes\n", sizeof(float));
    printf("Size of char = %lu bytes\n", sizeof(char));
    printf("Size of double = %lu bytes\n", sizeof(double));

    return 0;
}
