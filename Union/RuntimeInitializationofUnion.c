/*
Topic: Runtime Initialization of Union
--------------------------------------
About:
A union is a special data type in C that allows storing 
different data types in the same memory location.
Only one member can hold a value at a time.

In this program:
We declare a union named 'Data' with integer, float, 
and character members. We assign (initialize) values 
to each member at runtime and observe that only the 
last assigned value is retained.
*/

#include <stdio.h>

// Union declaration
union Data {
    int i;
    float f;
    char ch;
};

int main(void)
{
    union Data d1;

    // Runtime initialization
    printf("Enter an integer value: ");
    scanf("%d", &d1.i);
    printf("Integer member: %d\n", d1.i);

    printf("\nEnter a float value: ");
    scanf("%f", &d1.f);
    printf("Float member: %.2f\n", d1.f);

    printf("\nEnter a character value: ");
    scanf(" %c", &d1.ch);   // space before %c to skip newline
    printf("Character member: %c\n", d1.ch);

    // Displaying all members (shows overwrite effect)
    printf("\n--- Current Values in Union ---\n");
    printf("Integer = %d\n", d1.i);
    printf("Float   = %.2f\n", d1.f);
    printf("Character = %c\n", d1.ch);

    return 0;
}


/*
Output:-
------
Enter an integer value: 85
Integer member: 85

Enter a float value: 9.4
Float member: 9.40

Enter a character value: a
Character member: a

--- Current Values in Union ---
Integer = 1091987041
Float   = 9.40
Character = a


*/