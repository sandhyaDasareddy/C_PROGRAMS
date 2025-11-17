/*
Program: Runtime Initialization of String using gets() and puts()
-----------------------------------------------------------------
Concept:
--------
- Runtime initialization means taking string input from the user during program execution.
- The function 'gets()' is used to read a line of text (including spaces) until the Enter key is pressed.
- The function 'puts()' is used to display a string on the screen.


Note:
-------
'gets()' is deprecated in modern C because it is unsafe (can cause buffer overflow).  
However, it is often used for learning purposes to understand string I/O.

Objective:
-----------
1. Declare a string variable (character array).
2. Read the string using 'gets()'.
3. Display the string using 'puts()'.
*/

#include <stdio.h>

int main()
{
    char name[50]; // declare string variable

    // Input string from user
    printf("Enter your name: ");
    gets(name); // runtime initialization using gets()

    // Display string using puts()
    printf("You entered: ");
    puts(name);

    return 0;
}


/*
Output:-
-------
Enter your name: sandhya
You entered: sandhya

*/