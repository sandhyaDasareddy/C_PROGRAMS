/*
Program: Find GCD of Two Numbers Using While Loop
-------------------------------------------------

About:
------
→ GCD (Greatest Common Divisor) is the largest integer that divides 
  both numbers without leaving a remainder.

Logic:
------
1. Read two numbers from the user.
2. Find the smallest of the two numbers.
3. Initialize i = 1.
4. Run a while loop from 1 to that smaller number.
5. If both numbers are divisible by i, update gcd = i.
6. Print the final value of gcd.
*/

#include <stdio.h>

int main()
{
    int a, b, i = 1, gcd = 1;

    // Step 1: Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Step 2: Find smaller number
    int min = (a < b) ? a : b;

    // Step 3: Find GCD using while loop
    while (i <= min)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
        i++;
    }

    // Step 4: Display GCD
    printf("GCD of the given numbers = %d\n", gcd);
    return 0;
}

/*
Output:
---------------
Enter two numbers: 20 50
GCD of the given numbers = 10

*/
