/*
Topic: Structure Assignment
----------------------------

About Structure Assignment:
----------------------------
In C, one structure variable can be assigned to another variable of the 
same structure type directly using the assignment (=) operator.

This performs a **member-wise copy** of all structure elements.

Note:
-----
- Both structures must be of the **same type**.
- Structure assignment copies the values of all members from one structure to another.
- It does not copy the address; both remain independent after assignment.

Syntax:
--------
structure_variable2 = structure_variable1;

Example:
---------
struct Student s1, s2;
s2 = s1;   // Copies all data members of s1 into s2
*/

#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    struct Student s1, s2;   // Two structure variables of same type

    // Assign values to s1
    s1.roll_no = 101;
    strcpy(s1.name, "Sandhya");
    s1.marks = 95.5;

    // Assign one structure to another
    s2 = s1;   // Member-wise copy

    // Display both structures
    printf("Student 1 Details:\n");
    printf("Roll Number : %d\n", s1.roll_no);
    printf("Name        : %s\n", s1.name);
    printf("Marks       : %.2f\n\n", s1.marks);

    printf("Student 2 Details (After Assignment):\n");
    printf("Roll Number : %d\n", s2.roll_no);
    printf("Name        : %s\n", s2.name);
    printf("Marks       : %.2f\n", s2.marks);

    return 0;
}

/*
Output:-
Student 1 Details:
Roll Number : 101
Name        : Sandhya
Marks       : 95.50

Student 2 Details (After Assignment):
Roll Number : 101
Name        : Sandhya
Marks       : 95.50

*/