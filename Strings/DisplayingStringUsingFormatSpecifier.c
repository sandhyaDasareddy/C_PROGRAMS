/*
Program: Displaying String Using %s Format Specifier
-----------------------------------------------------

Concept:
----------
In C language, the %s format specifier is used with printf() to display a string.
A string is a sequence of characters terminated by the null character '\0'.

When printf() is used with %s, it automatically prints all characters of the string 
until it encounters the null character '\0'.


Example:
------------
char name[] = "Sandhya";
printf("%s", name);

This statement prints the entire string "Sandhya".

Objective:
-------------
1. Initialize a string.
2. Display the string using %s format specifier.
*/

#include <stdio.h>

int main()
{
    // Compile-time initialization of string
    char name[] = "Sandhya";

    // Display string using %s format specifier
    printf("%s\n", name);

    return 0;
}

/*
Output:-
------
Sandhya
*/
