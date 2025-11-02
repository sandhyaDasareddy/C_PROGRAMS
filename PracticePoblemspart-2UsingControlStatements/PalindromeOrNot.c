/*
Program: Check Whether the Given Number is a Palindrome or Not
--------------------------------------------------------------

About:
------
→ A number is called a palindrome if it remains the same when its digits are reversed.
   Example: 121, 1331, 1221 are palindrome numbers.

Logic:
------
1. Read a number from the user.
2. Store the original number in a temporary variable.
3. Reverse the digits of the number using modulus (%) and division (/).
4. Compare the reversed number with the original number:
   - If both are equal → It is a palindrome.
   - Otherwise → It is not a palindrome.
*/

#include <stdio.h>

int main()
{
    int num, original, rev = 0, r;

    // Step 1: Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Store the original number
    original = num;

    // Step 3: Reverse the number
    while (num != 0)
    {
        r = num % 10;         // Extract last digit
        rev = rev * 10 + r;   // Build reversed number
        num = num / 10;       // Remove last digit
    }

    // Step 4: Check if the number is palindrome
    if (original == rev)
        printf("The number %d is a Palindrome.\n", original);
    else
        printf("The number %d is NOT a Palindrome.\n", original);
    return 0;
}

/*
Sample Output:
---------------
Case 1:
Enter a number: 141
The number 141 is a Palindrome.

Case 2:
Enter a number: 123
The number 123 is NOT a Palindrome.
*/
