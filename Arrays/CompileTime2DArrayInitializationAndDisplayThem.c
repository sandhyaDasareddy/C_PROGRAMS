/*
Topic: Compile-Time Initialization of a 2D Array in C
--------------------------------------------------------
Concept:
In C language, a 2D array is an array of arrays — it stores elements in rows and columns.
We can initialize a 2D array at compile time (before program execution) 
by assigning values directly in the program.

Syntax:
data_type array_name[rows][columns] = {
    {value1, value2, ...},
    {value3, value4, ...}
};

Example:
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

Here:
- The array 'a' has 2 rows and 3 columns.
- The first row contains 1, 2, 3.
- The second row contains 4, 5, 6.

Program Task:
--------------
1. Declare and initialize a 2D array at compile time.
2. Display all its elements in matrix form.

Algorithm:
-----------
Step 1: Start
Step 2: Declare and initialize the 2D array
Step 3: Use nested loops to access each element
Step 4: Display the elements in matrix form
Step 5: Stop
*/

#include <stdio.h>
int main()
{
    int a[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int i, j;

    printf("Elements of the 2D array are:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 
/*
Output:---
-------
Elements of the 2D array are:
10      20      30
40      50      60

*/