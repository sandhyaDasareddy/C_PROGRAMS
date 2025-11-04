/*
Program: Print Fibonacci Series
-------------------------------

About:
------
→ The Fibonacci series is a sequence of numbers where each number 
  is the sum of the two preceding ones.

→ The series starts as: 0, 1, 1, 2, 3, 5, 8, 13, ...

Logic:
------
1. Initialize the first two numbers as 0 and 1.
2. Print the first two numbers.
3. Use a loop to calculate the next term as:
       next = first + second
4. Update first = second and second = next.
5. Repeat the process until the desired number of terms is printed.
*/

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;

    // Step 1: Read the number of terms to print
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    // Step 2: Print the first two terms
    printf("Fibonacci Series: %d %d ", first, second);

    // Step 3: Generate the next terms using a for loop
    for (i = 3; i <= n; i++)
    {
        next = first + second;   // next term = sum of previous two
        printf("%d ", next);

        // Update values for next iteration
        first = second;
        second = next;
    }
    return 0;
}

/*
Output:
---------------
Enter the number of terms in Fibonacci series: 5
Fibonacci Series: 0 1 1 2 3 
*/
