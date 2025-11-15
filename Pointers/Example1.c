/*
------------------------------------------------------------
                      📘    POINTERS
------------------------------------------------------------

👉 DEFINITION:
A pointer is a special variable that stores the **memory address**
of another variable.

In simple words:
A normal variable stores a value, but a pointer variable stores the address (location) of that value.

------------------------------------------------------------
👉 WHY USE POINTERS?
1. To access and manipulate data stored in memory.
2. To achieve dynamic memory allocation.
3. To pass large data (like arrays) efficiently to functions.
4. To return multiple values from a function.
5. To handle strings and arrays effectively.

------------------------------------------------------------
👉 DECLARATION SYNTAX:

data_type *pointer_name;

Example:
int *p;       // p is a pointer to an integer
float *fptr;  // fptr is a pointer to a float
char *ch;     // ch is a pointer to a character

------------------------------------------------------------
👉 INITIALIZATION:

We can assign the address of a variable to a pointer using the 
address-of operator (&).

Example:
int a = 10;
int *p;
p = &a;

Here:
- ‘a’ holds the value 10.
- ‘p’ holds the address of ‘a’.
- ‘*p’ gives the value stored at that address (i.e., 10).

------------------------------------------------------------
👉 IMPORTANT OPERATORS:
1. & (Address-of Operator) → gives the address of a variable.
2. *(Value-of / Dereference Operator)→ gives the value stored at the address.

------------------------------------------------------------
👉 EXAMPLE TRACE:

int a = 5;
int *ptr;
ptr = &a;

Now:
   a   = 5
   &a  = 1000 (assume memory address)
   ptr = 1000
   *ptr = 5

------------------------------------------------------------
👉 POINTER EXAMPLE PROGRAM
------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    int num = 25;         // variable declaration
    int *ptr;             // pointer declaration

    ptr = &num;           // pointer initialization

    printf("Value of num       = %d\n", num);
    printf("Address of num     = %p\n", &num);
    printf("Pointer ptr holds  = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}

/*
Output:-
-------
Value of num       = 25
Address of num     = 0061FF18
Pointer ptr holds  = 0061FF18
Value pointed by ptr = 25
*/


