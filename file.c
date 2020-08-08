#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
FILE *fs,*ft;
int c=0;
fs=fopen("C:\Users\SANJEET\Desktop\sanj.txt","r");
ft=fopen("C:\Users\SANJEET\Desktop\rohit.txt","w");
if(fs==NULL)
{
printf("source file cannot open");
exit(1);
}
if(ft==NULL)
{
printf("target file cannot be open");
exit(1);
}
while(!feof(fs))
{
fputc(fgetc(fs),ft);
c++;
}
printf("content copied");
fclose(fs);
fclose(ft);
}
