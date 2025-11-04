/*
Program: Runtime Initialization of String
------------------------------------------
Concept:
------------
Runtime initialization means taking string input from the user during program execution.
In C, we can read a string using:
    1. scanf("%s", string_variable);  → reads a single word (stops at space)
    2. gets(string_variable);         → reads a complete line including spaces (deprecated, not safe)
    3. fgets(string_variable, size, stdin); → safer version of gets()

Objective:
-------------
1. Declare a character array (string).
2. Accept the string input from the user at runtime.
3. Display the entered string using %s format specifier.
*/

#include <stdio.h>

int main()
{
    char name[50]; // declare string variable

    // Input string from user
    printf("Enter your name: ");
    scanf("%s", name); // runtime initialization

    // Display string
    printf("You entered: %s\n", name);

    return 0;
}


/*
Output:-
--------
Enter your name: Sandhya
You entered: Sandhya


*/