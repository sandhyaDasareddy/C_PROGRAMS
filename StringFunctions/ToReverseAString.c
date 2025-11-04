/*
strrev() – To Reverse a String

Note: strrev() is available in some compilers (like Turbo C).
In modern compilers, you may need to implement it manually.

Program (Manual Implementation):

Program to reverse a string manually
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "Sandhya";
    int i, len;
    char rev[50];

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n", rev);

    return 0;
}


/*
Output:-
------
Original String: Sandhya
Reversed String: ayhdnaS

*/