//WAP to convert Uppercase to Lowercase...
#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i;
clrscr();
printf("Enter Any String:- ");
scanf("%s",&str);
printf("The String Is:- %s\n",str);
for(i=0;str[i]!='\0';i++)
if(str[i]>=65 && str[i]<=90)
{
str[i]=str[i]+32;
}
printf("The String In Lowercase Is:- %s",str);
getch();
}

