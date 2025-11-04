/*
Topic: Compile-Time Initialization of Unions
--------------------------------------------
About:
A union in C is a special data type that allows storing different
data types in the same memory location. Only one member can hold
a value at a time because all members share the same memory space.

In this program:
We declare a union named 'Data' with three members: an integer,
a float, and a character. Then we initialize it at compile time
and display its value.
*/

#include <stdio.h>

// Union declaration
union Data {
    int i;
    float f;
    char ch;
};

void main(void)
{
    // Compile-time initialization of union (only one member can be initialized)
    union Data d1 = {100};

    printf("Compile-time initialized value of integer member = %d\n", d1.i);
}

/*
Output:-
-------
Compile-time initialized value of integer member = 100

*/