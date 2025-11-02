/*
Program: Find GCD of Two Numbers Using For Loop
-----------------------------------------------

About:
------
→ GCD (Greatest Common Divisor) is the largest integer that divides 
  both numbers without leaving a remainder.

Logic:
------
1. Read two numbers from the user.
2. Find the smallest of the two numbers.
3. Run a for loop from 1 to that smaller number.
4. If both numbers are divisible by i, update gcd = i.
5. Print the final value of gcd.
*/

#include <stdio.h>

int main()
{
    int a, b, i, gcd = 1;

    // Step 1: Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Step 2: Find smaller number
    int min = (a < b) ? a : b;

    // Step 3: Find GCD using for loop
    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
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
