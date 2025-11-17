/*
What is ftell()?

ftell() returns the current position of the file pointer (in bytes) from the beginning of the file.

Syntax:
long ftell(FILE *fp);

*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char str[50];
    char ch;
    long pos;

    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }

    pos = ftell(fp);
    printf("\npos - %ld", pos);

    fseek(fp, 5, SEEK_SET);
    printf("\npos - %ld", ftell(fp));

    ch = fgetc(fp);
    printf("\n%c", ch);
    printf("\npos - %ld", ftell(fp));

    fscanf(fp, "%s", str);
    printf("\n%s", str);

    printf("\npos - %ld", ftell(fp));

    fclose(fp);

    return 0;
}