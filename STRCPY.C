#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20],dup[20];
clrscr();
printf("enter text");
gets( name);
printf("\noriginal text is:- %s",  name);
printf("\nduplicate text is:- %s",strcpy(dup,name));
getch();
}