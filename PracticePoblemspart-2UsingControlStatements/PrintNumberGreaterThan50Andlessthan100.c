/*
Program: Print Numbers Greater Than 50 and Less Than 100
--------------------------------------------------------

About the Program:
------------------
→ This program prints all numbers between 50 and 100 (excluding both).
→ It uses a simple for loop to iterate from 51 to 99.
→ Each number is printed one by one.

Logic:
------
1. Start a loop from 51 (since 50 should not be included).
2. Continue the loop until 99 (since 100 should not be included).
3. Print each number using printf().
*/

#include <stdio.h>

int main()
{
    int i;

    // Logic to print numbers greater than 50 and less than 100
    for (i = 51; i < 100; i++)
    {
        printf("%d ", i);
    }


    return 0;
}

/*
Output:
--------
51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
*/
