/*
strcat() – To Concatenate Two Strings
Description:

The function strcat() joins two strings together (adds the second string to the end of the first).

Syntax:
strcat(string1, string2);

Program to concatenate two strings using strcat()
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello ";
    char str2[50] = "World!";

    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}


/*
Output:-
------
Concatenated String: Hello World!

*/