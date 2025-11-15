#include<stdio.h>

int main()
{
    int a = 10;

    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("Value of a = %d\n", a);
    printf("Address of a (&a) = %p\n", (void*)&a);

    printf("\nValue of p (address of a) = %p\n", (void*)p);
    printf("Value pointed by p (*p) = %d\n", *p);

    printf("\nValue of q (address of p) = %p\n", (void*)q);
    printf("Value pointed by q (*q) = %p\n", (void*)*q);
    printf("Value pointed by *q (**q) = %d\n", **q);

    printf("\nValue of r (address of q) = %p\n", (void*)r);
    printf("Value pointed by r (*r) = %p\n", (void*)*r);
    printf("Value pointed by *r (**r) = %p\n", (void*)**r);
    printf("Value pointed by **r (***r) = %d\n", ***r);

    return 0;
}
/*
Output:-
------
Value of a = 10
Address of a (&a) = 0061FF18

Value of p (address of a) = 0061FF18
Value pointed by p (*p) = 10

Value of q (address of p) = 0061FF14
Value pointed by q (*q) = 0061FF18
Value pointed by *q (**q) = 10

Value of r (address of q) = 0061FF10
Value pointed by r (*r) = 0061FF14
Value pointed by *r (**r) = 0061FF18
Value pointed by **r (***r) = 10

*/
