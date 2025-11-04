/*
Program: Compile-Time Initialization of String and Display using Null Character '\0'
------------------------------------------------------------------------------------

Concept:
----------
In C language, a string is a collection (array) of characters terminated by 
a special null character '\0'. This null character marks the end of the string 
and tells the compiler or any function (like printf) where the string ends.

At **compile time**, strings can be initialized directly in the source code.

Example:
----------
char str[] = "HELLO";
Here, the compiler automatically appends '\0' at the end.
So internally, it becomes:
{'H', 'E', 'L', 'L', 'O', '\0'}

Objective:
-------------
1. Initialize a string at compile time.
2. Display the string using printf().
3. Use the null character '\0' to indicate the end of the string.

*/

#include <stdio.h>

int main()
{
    // Compile-time initialization of string
    char str[] = "HELLO";

    // Displaying string using printf (stops automatically at '\0')
    printf("The string is: %s\n", str);

    // Display each character including the null character
    printf("\nDisplaying each character with null terminator:\n");
    for (int i = 0; i <= 5; i++)
    {
        if (str[i] == '\0')
            printf("Character at index %d : '\\0' (Null Terminator)\n", i);
        else
            printf("Character at index %d : %c\n", i, str[i]);
    }

    return 0;
}

/*

Output:-
-------
The string is: HELLO

Displaying each character with null terminator:
Character at index 0 : H
Character at index 1 : E
Character at index 2 : L
Character at index 3 : L
Character at index 4 : O
Character at index 5 : '\0' (Null Terminator)


*/
