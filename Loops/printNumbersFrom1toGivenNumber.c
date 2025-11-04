/*
Program: Print numbers from 1 to 10 using for loop
--------------------------------------------------

About 'for' loop:
-----------------
→ A 'for' loop is used when the number of iterations is known in advance.
→ It has three parts:
   1. Initialization  → executed once at the start.
   2. Condition       → checked before every iteration.
   3. Increment/Decrement → changes loop variable after each iteration.

Logic:
------
1. Initialize i = 1.
2. Continue loop while i <= 10.
3. Print i in each iteration.
4. Increment i by 1 after each print.
*/

#include <stdio.h>

int main()
{
    int i;

    // Loop to print numbers from 1 to 10
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

/*
Output:
--------
1
2
3
4
5
6
7
8
9
10
*/
