/*
w+ mode:
--------
w+ = read + write, but:

✔ Creates a new file (or clears existing file)
✔ Allows both reading and writing
✔ Writing starts at the beginning (file initially empty)

So your program will:

Open abc.txt (clear it)

Write "sandhya"

Rewind to beginning

Read and print "sandhya"


*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char str[40];
    char ch;

    fp = fopen("abc.txt", "w+");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }

    fputs("sandhya", fp);   // Write to file

    rewind(fp);             // Move pointer to beginning

    // Correct way to read using fgetc()
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
