/*
Special Operators in C Language
-------------------------------

Definition:
Special operators in C are those operators that perform unique or specialized
functions which do not fit into other categories like arithmetic, logical, or relational operators.

=> These operators help in performing specific operations such as memory access,
size checking, and pointer handling.

----------------------------------------------------------------------------------------------------------------------------
| Operator | Name                           | Description                                                                  |
| -------- | ------------------------------ | ---------------------------------------------------------------------------- |
| sizeof   | Sizeof Operator                | Returns the size (in bytes) of a data type or variable.                      |
| &        | Address-of Operator            | Returns the memory address of a variable.                                    |
| *        | Pointer (value-at) Operator    | Used to access the value stored at a given address (used with pointers).     |
| ?:       | Conditional (Ternary) Operator | Acts as a short form of if-else statement.                                   |
| ,        | Comma Operator                 | Allows multiple expressions to be evaluated in a single statement.           |
| ->       | Structure Pointer Operator     | Used to access structure members using a pointer.                            |
| .        | Member Access (Dot) Operator   | Used to access structure members directly.                                   |
----------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main()
{
    int a = 10, b = 20;
    int *p = &a;   // pointer p holds address of a

    printf("Size of int = %lu bytes\n", sizeof(int));
    printf("Size of float = %lu bytes\n", sizeof(float));
    printf("Size of char = %lu bytes\n", sizeof(char));

    printf("Address of a = %p\n", &a);
    printf("Value of a using pointer = %d\n", *p);

    int max = (a > b) ? a : b;
    printf("Greater number = %d\n", max);

    // Comma Operator
    int c;
    c = (5, 10, 15); // 15 is assigned to c
    printf("Value of c = %d\n", c);

    // Dot Operator
    struct Student s1 = {1, 85.5};
    printf("Student ID (using .) = %d\n", s1.id);
    printf("Student Marks (using .) = %.1f\n", s1.marks);

    // Arrow Operator
    struct Student *ptr = &s1;
    printf("Student ID (using ->) = %d\n", ptr->id);
    printf("Student Marks (using ->) = %.1f\n", ptr->marks);

    return 0;
}


/*
Output:-
-------
Size of int = 4 bytes
Size of float = 4 bytes
Size of char = 1 bytes
Address of a = 0061FF08
Value of a using pointer = 10
Greater number = 20
Value of c = 15
Student ID (using .) = 1
Student Marks (using .) = 85.5
Student ID (using ->) = 1
Student Marks (using ->) = 85.5
*/