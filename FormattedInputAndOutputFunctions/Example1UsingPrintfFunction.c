/*
In C language, formatted input and output functions are used to display data on the screen and read data from the user in a specific format.
These functions belong to the stdio.h header file (Standard Input/Output).

Formatted Output Function – printf():
-------------------------------------
Purpose: Used to display (print) messages, variables, and results on the screen in a formatted way.
--------
Syntax: printf("format string", arguments);
Example: printf("The value of x is %d", x);

Here,

%d is a format specifier for an integer value.

x is the variable whose value will be printed.

Common Format Specifiers in printf():-
-------------------------------------------------------------------------
| Format Specifier | Meaning                           | Example Output |
| ---------------- | --------------------------------- | -------------- |
| `%d` or `%i`     | Integer                           | `25`           |
| `%f`             | Floating point (decimal)          | `3.140000`     |
| `%.2f`           | Floating point (2 decimal places) | `3.14`         |
| `%c`             | Single character                  | `A`            |
| `%s`             | String (sequence of characters)   | `Hello`        |
| `%u`             | Unsigned integer                  | `30000`        |
| `%x`             | Hexadecimal number                | `1a`           |
| `%o`             | Octal number                      | `17`           |

Example Program: Using printf():-
-------------------------------

*/

#include <stdio.h>
int main() 
{
    int a = 10;
    float b = 5.25;
    char c = 'A';
    
    printf("Integer value: %d\n", a);
    printf("Float value: %.2f\n", b);
    printf("Character value: %c\n", c);

    return 0;
}
