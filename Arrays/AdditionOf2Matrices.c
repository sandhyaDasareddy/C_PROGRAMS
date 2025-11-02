/*
Topic: Addition of Two Matrices in C
---------------------------------------
Concept:
A matrix is a 2D array of numbers arranged in rows and columns.
To add two matrices, both matrices must have the same number of rows and columns.

Rule:
If A and B are two matrices of the same size (m x n), 
then their sum C = A + B is also an m x n matrix where:
C[i][j] = A[i][j] + B[i][j]

Program Task:
--------------
1. Read two matrices from the user.
2. Add corresponding elements of both matrices.
3. Display the resulting matrix.

Algorithm:
-----------
Step 1: Start  
Step 2: Declare matrices A, B, and C  
Step 3: Read the number of rows and columns  
Step 4: Input elements of Matrix A  
Step 5: Input elements of Matrix B  
Step 6: Perform addition → C[i][j] = A[i][j] + B[i][j]  
Step 7: Display the resultant matrix C  
Step 8: Stop
*/

#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int i, j, rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant Matrix (A + B):\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
