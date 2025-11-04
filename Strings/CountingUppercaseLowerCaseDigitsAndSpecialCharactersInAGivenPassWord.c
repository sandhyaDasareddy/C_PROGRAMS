/*
Program: Count lowercase, uppercase, digits, and special symbols in a password
------------------------------------------------------------------------------

Concept:
----------
- A password is a sequence of characters that may include:
  ➤ Lowercase letters (a–z)
  ➤ Uppercase letters (A–Z)
  ➤ Digits (0–9)
  ➤ Special symbols (!, @, #, $, etc.)
  
- We will use a loop to check each character in the password.
- The '<ctype.h>' library provides functions like:
    islower(), isupper(), isdigit() — to check character types.

Steps:
--------
1. Input the password from the user.
2. Check each character one by one.
3. Increment respective counters based on character type.
4. Display the counts.
*/

#include <stdio.h>
#include <ctype.h>   // for islower, isupper, isdigit
#include <string.h>  // for strlen

int main()
{
    char password[100];
    int i, lower = 0, upper = 0, digit = 0, special = 0;

    // Read password from user
    printf("Enter your password: ");
    gets(password);  // reads input including special characters

    // Loop through each character in the password
    for(i = 0; i < strlen(password); i++)
    {
        if(islower(password[i]))
            lower++;
        else if(isupper(password[i]))
            upper++;
        else if(isdigit(password[i]))
            digit++;
        else
            special++;
    }

    // Display results
    printf("\nPassword Analysis:\n");
    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d\n", digit);
    printf("Special symbols: %d\n", special);

    return 0;
}


/*
Output:-
------
Enter your password: hello i am sandhya

Password Analysis:
Lowercase letters: 15
Uppercase letters: 0
Digits: 0
Special symbols: 3


*/