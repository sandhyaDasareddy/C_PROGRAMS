/*
Program: Count the Number of Students Aged Between 16 and 18 Using For Loop and Continue
----------------------------------------------------------------------------------------

About:
------
→ This program reads the age of 10 students and counts how many students
  are in the age group between 16 and 18 years (inclusive).

→ The 'continue' statement is used to skip students whose age is not between 16 and 18.

Logic:
------
1. Initialize a counter variable to 0.
2. Use a for loop to read the age of 10 students.
3. If the student’s age is not between 16 and 18, use 'continue' to skip counting.
4. Otherwise, increment the counter.
5. After the loop ends, display the total count.
*/

#include <stdio.h>

int main()
{
    int i, age, count = 0;

    // Step 1: Read the age of 10 students using a for loop
    for (i = 1; i <= 10; i++)
    {
        printf("Enter age of student %d: ", i);
        scanf("%d", &age);

        // Step 2: Skip if age not between 16 and 18 using continue
        if (age < 16 || age > 18)
            continue;

        // Step 3: Increment count if age is between 16 and 18
        count++;
    }

    // Step 4: Display the total count
    printf("\nNumber of students aged between 16 and 18: %d\n", count);

    return 0;
}

/*
Output:
---------------
Enter age of student 1: 5
Enter age of student 2: 6
Enter age of student 3: 23
Enter age of student 4: 87
Enter age of student 5: 15
Enter age of student 6: 16
Enter age of student 7: 18
Enter age of student 8: 16
Enter age of student 9: 17
Enter age of student 10: 2

Number of students aged between 16 and 18: 4
*/
