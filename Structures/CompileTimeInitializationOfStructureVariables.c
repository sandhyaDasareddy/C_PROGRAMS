/*
Topic: Compile-Time Initialization of Structure Variables
---------------------------------------------------------

About Structure:
----------------
In C language, a structure is a user-defined data type that allows the grouping 
of variables of different data types under a single name. 
It is declared using the keyword 'struct'.

Syntax:
--------
struct structure_name {
    data_type member1;
    data_type member2;
    ...
};

We can initialize structure variables in two ways:
1. Compile-time initialization → Values are given while declaring the variable.
2. Run-time initialization → Values are read from the user using scanf().

This program illustrates compile-time initialization of a structure variable.
The structure 'Student' contains name, roll number, and marks.
The values are assigned at compile time and then displayed.
*/

#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    // Compile-time initialization of structure variable
    struct Student s1 = {"Sandhya", 417, 92.5};

    // Display structure members
    printf("Student Details:\n");
    printf("Name      : %s\n", s1.name);
    printf("Roll No.  : %d\n", s1.roll_no);
    printf("Marks     : %.2f\n", s1.marks);

    return 0;
}

/*
Output:-
-------
Student Details:
Name      : Sandhya
Roll No.  : 417
Marks     : 92.50

*/