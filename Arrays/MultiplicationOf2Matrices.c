/*
Topic: Multiplication of Two Matrices in C
--------------------------------------------
Concept:
Matrix multiplication is a binary operation that takes a pair of matrices 
and produces another matrix.

Condition:
Matrix multiplication is possible only when 
the number of columns of the first matrix (A) 
is equal to the number of rows of the second matrix (B).

If A is of size (m × n) and B is of size (n × p), 
then the resulting matrix C will be of size (m × p).

Formula:
C[i][j] = Σ (A[i][k] * B[k][j]) for k = 0 to n-1

Program Task:
--------------
1. Read two matrices A and B from the user.
2. Check if multiplication is possible.
3. Multiply A and B to form C.
4. Display the resultant matrix.

Algorithm:
-----------
Step 1: Start  
Step 2: Input rows and columns of both matrices  
Step 3: Check if columns of A == rows of B  
Step 4: Input elements of A and B  
Step 5: Perform multiplication using nested loops  
Step 6: Display resultant matrix C  
Step 7: Stop
*/

#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int i, j, k;
    int r1, c1, r2, c2;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("\nMatrix multiplication not possible.\n");
        printf("Columns of A must be equal to rows of B.\n");
        return 0;
    }

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize resultant matrix elements to 0
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
Output:-
-------
Enter rows and columns for Matrix A: 2 2
Enter rows and columns for Matrix B: 2 2

Enter elements of Matrix A:
1 2 
2 1

Enter elements of Matrix B:
3 4 
4 3

Resultant Matrix (A x B):
11      10
10      11


*/