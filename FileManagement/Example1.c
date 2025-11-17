/*
How to write text into a file in c

file type pointer

*/
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    int a = 5;
    char ch = 'a';
    char str[5]="devi";
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    fputc(ch,fp);
    for(int i = 0;i!=strlen(str);i++)
    {
        fputc(str[i],fp);
    }

    fprintf(fp,"%d%s",a,str);
    fputs(str,fp);
}