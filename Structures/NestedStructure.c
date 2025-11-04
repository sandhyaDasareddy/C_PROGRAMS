/*
Topic: Nested Structure in C
----------------------------
About:
A nested structure is a structure defined inside another structure. 
It allows grouping related information under one main structure.

In this program:
We define a structure 'student' that contains:
- name
- pin
- a nested structure 'DOB' (for date of birth: day, month, year)

We will read and display all details using dot operator.
*/

#include <stdio.h>

// Structure declaration
struct student
{
    char name[20];
    int pin;

    // Nested structure for Date of Birth
    struct DOB
    {
        int day, month, year;
    } dob; // variable declaration inside student
};

void main(void)
{
    struct student s;

    printf("Enter name and pin: ");
    scanf("%s %d", s.name, &s.pin);

    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", s.name);
    printf("PIN  : %d\n", s.pin);
    printf("DOB  : %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);
}

/*
Output:-
Enter name and pin: sandhya 417
Enter date of birth (dd mm yyyy): 27-09-1999

--- Student Details ---
Name : sandhya
PIN  : 417
DOB  : 27--9--2015*/