/*
Program: Find Factorial of a Given Number
-----------------------------------------

About Factorial:
----------------
→ The factorial of a number n (written as n!) is the product of all positive integers from 1 to n.  
   Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

Logic:
------
1. Input a number 'n' from the user.
2. Initialize a variable 'fact' to 1.
3. Use a loop to multiply numbers from 1 to n.
4. After the loop, print the result.
*/

#include <stdio.h>

int main()
{
    int n, i;
    long fact = 1; // Step 1: Initialize factorial variable

    // Step 2: Input number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Step 3: Calculate factorial using for loop
    for (i = 1; i <= n; i++)
    {
        fact = fact * i; // Multiply each number up to n
    }

    // Step 4: Display result
    printf("Factorial of %d = %ld\n", n, fact);

    return 0;
}

/*
Output:
--------------
Enter a number: 5
Factorial of 5 = 120
Thank you for using the factorial program.
*/
