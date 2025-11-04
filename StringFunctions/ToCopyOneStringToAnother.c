/*
strcpy() – To Copy One String to Another
Description:

The function strcpy() copies the contents of one string into another.

Syntax:
strcpy(destination, source);


Program to copy one string into another using strcpy()

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char source[50] = "Welcome";
    char destination[50];

    strcpy(destination, source);

    printf("Source String: %s\n", source);
    printf("Copied String: %s\n", destination);

    return 0;
}


/*
Output;-
------
Source String: Welcome
Copied String: Welcome

*/