/*
strlwr() and strupr() – Change Case of a String

These functions are compiler-specific (mainly work in Turbo C).

Program to convert string to lowercase and uppercase

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "Welcome To C";

    printf("Original: %s\n", str);
    printf("Lowercase: %s\n", strlwr(str));

    strcpy(str, "Welcome To C");
    printf("Uppercase: %s\n", strupr(str));

    return 0;
}

/*
Output:-
------
Original: Welcome To C
Lowercase: welcome to c
Uppercase: WELCOME TO C

*/