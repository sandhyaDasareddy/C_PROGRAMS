/*
How to read text from a file
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    char str[10];

    fp = fopen("abc.txt", "r");
    if(fp == NULL)
    {
        printf("File not found");
        exit(1);
    }

    // Reading character by character
    printf("Reading using fgetc():\n");
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    // Move file pointer back to beginning
    rewind(fp);

    // Reading using fgets()
    printf("\n\nReading using fgets():\n");
    fgets(str, 9, fp);
    printf("%s", str);

    fclose(fp);

    return 0;
}
