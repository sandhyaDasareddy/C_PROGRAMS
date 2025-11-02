/*
Topic: Run-Time Initialization of a 2D Array in C
----------------------------------------------------
Concept:
In C language, a 2D array can also be initialized at run time — 
that means the user enters the elements during program execution 
instead of assigning them in the code.

Syntax:
data_type array_name[rows][columns];

Then, use loops to input and display the values.

Program Task:
--------------
1. Accept the number of rows and columns.
2. Input elements of the 2D array from the user.
3. Display all elements in matrix form.

Algorithm:
-----------
Step 1: Start
Step 2: Declare a 2D array and variables (rows, cols, i, j)
Step 3: Read the number of rows and columns
Step 4: Use nested loops to input array elements
Step 5: Use nested loops to display array elements
Step 6: Stop
*/

#include <stdio.h>
int main()
{
    int a[10][10];
    int i, j, rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the 2D array:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe elements of the 2D array are:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*


*/