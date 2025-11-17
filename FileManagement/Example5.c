/*
r+ mode:
--------
r+ = read + write, but:

✔ File must already exist
✔ Writing starts at the beginning of the file
✔ It overwrites characters, does NOT append

(Unlike "a" or "a+")

 */
#include<stdlib.h>
 #include<stdio.h>
 int main()
 {
    FILE *fp = NULL;
    fp = fopen("abc.txt","r+");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fputc('z',fp);
    fputs("sandhya",fp);

    fclose(fp);
 }
