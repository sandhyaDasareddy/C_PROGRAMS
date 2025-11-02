/*
Program: Demonstrate the use of 'break' statement in C
------------------------------------------------------

About 'break':
--------------
→ The 'break' statement is used to terminate a loop immediately 
  when a certain condition is met.

Logic:
------
1. Use a loop to print numbers from 1 to 10.
2. When the number becomes 6, use 'break' to exit the loop.
*/

#include <stdio.h>

int main()
{
    int i;

    printf("Using break statement:\n");

    for (i = 1; i <= 10; i++)
    {
        if (i == 6)
            break;  // Exit loop when i equals 6
        printf("%d\n", i);
    }
    printf("\nLoop terminated when i = 6\n");

    return 0;
}

/*
Output:
--------------
Using break statement:
1 2 3 4 5 
Loop terminated when i = 6
Thank you for checking break example.
*/
