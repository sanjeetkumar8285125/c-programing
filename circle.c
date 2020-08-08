#Include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{

    FILE *fp;
    char c=' ';
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("can not open file");
        exit(1);
    }
    printf("\n contents read :");
    while(!feof(fp))
        printf("%c",getc(fp));
    printf("write data & to stop press '.' :");
    while(c!='.')
    {
        c=getche();
        fputc(c,fp);
    }
}
