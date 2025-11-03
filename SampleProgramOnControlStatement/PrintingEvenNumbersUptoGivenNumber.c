/*
Program: Print Even Numbers up to N
-----------------------------------

About Even Numbers:
-------------------
→ A number is called even if it is completely divisible by 2.
→ Example: 2, 4, 6, 8, 10, ...

Logic:
------
1. Input a number 'n' from the user.
2. Start a loop from 1 to n.
3. Check if each number is divisible by 2 using (i % 2 == 0).
4. If true, print that number as even.
*/

#include <stdio.h>

int main()
{
    int n, i;

    // Step 1: Input limit from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Step 2: Print even numbers up to n
    printf("Even numbers up to %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

/*
Output:
--------------
Enter the value of n: 10
Even numbers up to 10 are:
2
4
6
8
10

*/
