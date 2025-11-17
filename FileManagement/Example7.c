/*
r+ mode
for both reading and writing
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char ch;

    fp = fopen("abc.txt", "r+");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }

    fputc('z', fp);           // writes 'z' at the beginning
    fputs("sandhya", fp);     // overwrites next characters

    rewind(fp);               // go back to beginning of file

    // read the updated file
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
