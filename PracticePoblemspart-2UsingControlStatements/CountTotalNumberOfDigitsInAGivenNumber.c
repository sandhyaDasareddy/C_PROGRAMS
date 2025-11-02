/*
Program: Count Total Number of Digits in a Given Number
-------------------------------------------------------

About:
------
→ This program counts how many digits are present in an integer.

Logic:
------
1. Read a number from the user.
2. Repeat dividing the number by 10 until it becomes 0.
3. Increment a counter in each step.
4. Display the total count.
*/

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;  // Remove last digit
        count++;         // Increment digit counter
    }

    printf("Total number of digits = %d\n", count);
    return 0;
}

/*
Output:
---------------
Enter a number: 547
Total number of digits = 3
*/
