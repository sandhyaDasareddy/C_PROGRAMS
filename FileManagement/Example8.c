/*
fseek()
------
fseek() is a file-handling function used to move the file pointer to any position inside a file.

FILE POINTER?

Think of the file pointer as a cursor that moves inside the file:

A B C D E F G H
^
pointer (start)


fgetc(), fputc(), fgets(), etc. read/write from where the pointer is currently positioned.

syntax:-
------
fseek(file_pointer, offset, position);

Meaning:

file_pointer → pointer created by fopen()

offset → how many bytes to move

position → starting reference point
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch;

    fp = fopen("text.txt", "r+");
    if (fp == NULL)
    {
        printf("file not found");
        exit(1);
    }

    // Move to 4th character (index 3)
    fseek(fp, 3, SEEK_SET);

   ch = fgetc(fp);
   printf("%c",ch);

   fseek(fp,-3,SEEK_CUR);
   ch=fgetc(fp);
   printf("\n%c",ch);

   fseek(fp,-3,SEEK_END);
   ch = fgetc(fp);
   printf("\n%c",ch);

   fclose(fp);

   return 0;
}
