/*
Program: Demonstrate the use of 'continue' statement in C
---------------------------------------------------------

Logic:
------
1. Print numbers from 1 to 10.
2. Skip printing number 5 using 'continue'.
*/

#include <stdio.h>

int main()
{
    int i;

    printf("Using continue statement:\n");

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;  // Skip when i equals 5
        printf("%d ", i);
    }
    printf("\nNumber 5 was skipped using continue.\n");

    return 0;
}

/*
Output:
--------------
Using continue statement:
1 2 3 4 6 7 8 9 10 
Number 5 was skipped using continue.
*/
