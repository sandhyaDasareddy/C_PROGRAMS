/*
Find the Sum of Digits of a Four-Digit Number (Without Using Loops)
*/
#include <stdio.h>

int main()
{
    int num, n1, n2, n3, n4, sum;

    // Logic:
    // Step 1: Input a four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Step 2: Extract digits one by one from the last
    n1 = num % 10;   // Extract last digit
    num = num / 10;  // Remove last digit

    n2 = num % 10;   // Extract next digit
    num = num / 10;  // Remove that digit

    n3 = num % 10;   // Extract next digit
    num = num / 10;  // Remove that digit

    n4 = num % 10;   // Extract first digit

    // Step 3: Add all digits
    sum = n1 + n2 + n3 + n4;

    // Step 4: Display the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}


/*
Output:-
-------
Enter a four-digit number: 5824
Sum of digits = 19
*/
