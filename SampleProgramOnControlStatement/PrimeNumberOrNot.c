/*
Program: Check whether the given number is a Prime Number or not
-----------------------------------------------------------------

About Prime Number:
-------------------
→ A prime number is a number that is divisible only by 1 and itself.
→ Example: 2, 3, 5, 7, 11, 13, ...

Logic:
------
1. Input a number from the user.
2. If the number is less than or equal to 1 → it is not prime.
3. Otherwise, use a loop from 1 to the number to count its factors.
4. If the number has exactly two factors (1 and itself), it is prime.
5. Otherwise, it is not prime.
*/

#include <stdio.h>

int main()
{
    int n, i, count = 0;

    // Step 1: Input number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Step 2: Check divisibility
    if (n <= 1)
    {
        printf("%d is not a prime number.\n", n);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        // Step 3: Check the number of factors
        if (count == 2)
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}

/*
Output:
--------------
Enter a number: 7
7 is a prime number.
*/
