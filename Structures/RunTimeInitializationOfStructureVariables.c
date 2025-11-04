/*
Topic: Run-Time Initialization of Structure Variables
------------------------------------------------------

About Structure:
----------------
In C language, a structure is a user-defined data type that allows grouping 
of different types of variables (int, float, char, etc.) under a single name.

We can initialize structure variables in two ways:
1. Compile-time initialization → Values are assigned at the time of declaration.
2. Run-time initialization → Values are entered by the user during program execution.

In this program, we perform run-time initialization of structure variables by 
reading data from the user using scanf() function and then displaying it.
*/

#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;  // Structure variable declaration

    // Read values from the user (Run-time initialization)
    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Display structure members
    printf("\nStudent Details:\n");
    printf("Name      : %s\n", s1.name);
    printf("Roll No.  : %d\n", s1.roll_no);
    printf("Marks     : %.2f\n", s1.marks);

    return 0;
}


/*
Output:-
-------
Enter student name: sandhya
Enter roll number: 417
Enter marks: 89

Student Details:
Name      : sandhya
Roll No.  : 417
Marks     : 89.00

*/