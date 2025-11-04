/*
Topic: Finding Size of a Structure
-----------------------------------

About:
------
The size of a structure can be found using the sizeof() operator.

Syntax:
--------
sizeof(struct structure_name);
or
sizeof(structure_variable);

Notes:
------
1. The sizeof() operator returns the total memory (in bytes) occupied by the structure.
2. The size depends on:
   - Data types of structure members.
   - Compiler padding/alignment rules.
3. Padding:
   - Compilers often add extra bytes between members to align data for efficient access.
   - Therefore, the total structure size may be **greater** than the sum of individual member sizes.

Example:
---------
If a structure has:
int → 4 bytes,
char → 1 byte,
float → 4 bytes,
the total size might be 12 bytes (due to padding/alignment).
*/

#include <stdio.h>

struct Student {
    int roll_no;     // 4 bytes
    char grade;      // 1 byte (may cause padding)
    float marks;     // 4 bytes
};

int main() {
    struct Student s1;

    printf("Size of structure Student: %zu bytes\n", sizeof(struct Student));
    printf("Size of variable s1: %zu bytes\n", sizeof(s1));

    return 0;
}


/*
Output:-
-------
Size of structure Student: 12 bytes
Size of variable s1: 12 bytes

*/