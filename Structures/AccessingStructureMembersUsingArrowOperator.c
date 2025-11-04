/*
Topic: Accessing Structure Members Using Arrow (->) Operator
------------------------------------------------------------

About Structure and Arrow Operator:
-----------------------------------
A structure in C allows grouping of different types of variables under one name.

When we use a **structure pointer**, we cannot use the dot (.) operator 
directly to access members. Instead, we use the **arrow (->) operator**.

Syntax:
--------
structure_pointer->member_name

Example:
---------
struct Student *ptr;
ptr = &s1;
printf("%d", ptr->roll_no);

In this program, we will define a structure 'Student', 
use a pointer to that structure, and access its members using the arrow operator.
*/

#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    struct Student s1;         // Structure variable
    struct Student *ptr;       // Structure pointer

    ptr = &s1;                 // Assign address of s1 to ptr

    // Assign values using arrow operator
    ptr->roll_no = 102;
    strcpy(ptr->name, "Revathi");
    ptr->marks = 92.3;

    // Displaying values using arrow operator
    printf("Student Details (Accessed using -> operator):\n");
    printf("Roll Number : %d\n", ptr->roll_no);
    printf("Name        : %s\n", ptr->name);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}


/*
Output:-
--------
Student Details (Accessed using -> operator):
Roll Number : 102
Name        : Revathi
Marks       : 92.30

*/