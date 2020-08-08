#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name2[20];
printf("enter string in uppercase");
gets(name2);
printf("after strlwr(): %s",strlwr(name2));
getch();
}