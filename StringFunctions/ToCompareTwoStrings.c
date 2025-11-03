/*
strcmp() – To Compare Two Strings
Description:

The function strcmp() compares two strings lexicographically (character by character).

It returns:

0 if both strings are equal

A positive value if string1 > string2

A negative value if string1 < string2

Syntax:
int strcmp(string1, string2);

Program to compare two strings using strcmp()


*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Apple";
    char str2[50] = "Banana";
    int result;

    result = strcmp(str1, str2);

    if(result == 0)
        printf("Strings are Equal.\n");
    else if(result > 0)
        printf("First string is Greater.\n");
    else
        printf("Second string is Greater.\n");

    return 0;
}


/*Output:-
--------
Second string is Greater.

*/