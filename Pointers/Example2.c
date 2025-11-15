/*
indirection operator(*):
----------------------
int a = 10;
int *ptr = &a;
printf("%d",*ptr);
*/
#include<stdio.h>
int main()
{
    int a= 10;
    int b = 20;
    char ch = 'a';
    int *ptr = &a;
    int *ptr1=&b;
    char *ptr2= &ch;
    printf("%d\n",*ptr);
     printf("%d\n",*ptr1);
      printf("%d\n",*ptr2);
       printf("%d\n",ptr); printf("%d\n",ptr1); printf("%d\n",ptr2);
}