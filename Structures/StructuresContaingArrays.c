/*
Topic: Structure Containing Arrays 
-----------------------------------
About:
In C language, a structure can contain arrays as its members. 
This helps in storing multiple values (like marks or grades) under one structure variable.

In this program:
We define a structure 'student' that contains:
- name (character array)
- marks (integer array for 5 subjects)
We will read and display the student's details and marks.
*/

#include <stdio.h>

struct student
{
    char name[30];   // Array to store student name
    int marks[5];    // Array to store marks of 5 subjects
};

void main(void)
{
    struct student s;
    int i;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter marks in 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Marks: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", s.marks[i]);
    }

    // Calculate total and average
    int total = 0;
    for (i = 0; i < 5; i++)
        total += s.marks[i];

    float avg = total / 5.0;

    printf("\nTotal Marks: %d", total);
    printf("\nAverage Marks: %.2f\n", avg);
}

/*
Output:-
------
Enter student name: sandhya
Enter marks in 5 subjects:
Subject 1: 58
Subject 2: 95
Subject 3: 48
Subject 4: 78
Subject 5: 68

--- Student Details ---
Name: sandhya
Marks: 58 95 48 78 68 
Total Marks: 347
Average Marks: 69.40

*/