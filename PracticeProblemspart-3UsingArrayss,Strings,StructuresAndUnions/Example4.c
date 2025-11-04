/*
---------------------------------------------------------------------
PROGRAM: Prepare a rank list of students based on their marks
         (If two students have same marks, they share the same rank)
---------------------------------------------------------------------

💡 LOGIC / APPROACH:

1. Read the total number of students (n).
2. For each student, read:
      - Roll number
      - Name
      - Marks obtained
3. Store details in arrays (parallel arrays for roll, name, marks).
4. Sort the students in descending order of marks.
5. Assign ranks:
      - The first student gets rank 1.
      - For each next student:
           - If marks are equal to previous student → same rank.
           - Else → rank = current position + number of same marks before.
6. Display the final rank list with proper formatting.
---------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, temp_marks, temp_roll;
    char temp_name[50];

    // Step 1: Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    int roll[n];
    char name[n][50];
    int marks[n];

    // Step 2: Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    // Step 3: Sort students in descending order of marks
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (marks[i] < marks[j]) {
                // swap marks
                temp_marks = marks[i];
                marks[i] = marks[j];
                marks[j] = temp_marks;

                // swap roll numbers
                temp_roll = roll[i];
                roll[i] = roll[j];
                roll[j] = temp_roll;

                // swap names
                strcpy(temp_name, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp_name);
            }
        }
    }

    // Step 4: Display rank list with same-rank handling
    printf("\n---------------------------------------------\n");
    printf("RANK LIST (Based on Marks)\n");
    printf("---------------------------------------------\n");
    printf("Rank\t\tRoll No\t\tName\t\tMarks\n");

    int rank = 1;
    printf("%d\t\t%d\t\t%s\t\t%d\n", rank, roll[0], name[0], marks[0]);

    for (i = 1; i < n; i++) {
        if (marks[i] == marks[i - 1]) {
            // Same marks → same rank
            printf("%d\t\t%d\t\t%s\t\t%d\n", rank, roll[i], name[i], marks[i]);
        } else {
            // Different marks → new rank
            rank = i + 1;
            printf("%d\t\t%d\t\t%s\t\t%d\n", rank, roll[i], name[i], marks[i]);
        }
    }

    return 0;
}


/*
Output:-
-------
Enter number of students: 3

Enter details for student 1
Roll Number: 101
Name: meena
Marks: 76

Enter details for student 2
Roll Number: 102
Name: devi
Marks: 90

Enter details for student 3
Roll Number: 103
Name: sandhya
Marks: 67

---------------------------------------------
RANK LIST (Based on Marks)
---------------------------------------------
Rank            Roll No         Name            Marks
1               102             devi            90
2               101             meena           76
3               103             sandhya         67
*/