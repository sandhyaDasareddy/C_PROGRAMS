/*
Program: Find Sum and Average of All Digits in a Number
-------------------------------------------------------

About:
------
→ This program calculates both the sum and the average of all digits.

Logic:
------
1. Read a number from the user.
2. Extract digits one by one using % 10.
3. Add each digit to sum.
4. Count total digits.
5. Find average = sum / count.
*/

#include <stdio.h>

int main()
{
    int num, digit, sum = 0, count = 0;
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; // Store original number

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        count++;
        temp = temp / 10;
    }

    avg = (float)sum / count;

    printf("Sum of digits = %d\n", sum);
    printf("Average of digits = %.2f\n", avg);

    return 0;
}

/*
Output:
---------------

*/
