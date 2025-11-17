// Append mode in file handling
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char str[50];

    fp = fopen("abc.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter the content you want to append:\n");
    fgets(str, sizeof(str), stdin);    // Correct fgets

    fprintf(fp, "\n%s", str);            // Append string to file

    printf("Successfully appended\n");

    fclose(fp);

    return 0;
}
