#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
int len;
clrscr();
printf("enter string");
gets(name);
printf("\nentered string is:-%s",name);
printf("\nlenghth of string is:-%d",strlen(name));
getch();
}
