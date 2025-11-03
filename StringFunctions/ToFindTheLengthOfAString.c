/*
strlen() – To Find the Length of a String
Description:

The function strlen() returns the number of characters in a string (excluding the null character '\0').

Syntax:
int strlen(char str[]);


Program to find the length of a string using strlen()


*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "C Programming";
    int length;

    length = strlen(str);

    printf("String: %s\n", str);
    printf("Length of string = %d\n", length);

    return 0;
}


/*
Output:-
------
String: C Programming
Length of string = 13

*/