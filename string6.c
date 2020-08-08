//WAP to convert lowercase to uppercase...
#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i;
clrscr();
printf("Enter The String:- ");
gets(str);
printf("The String Is:-%s\n",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=97 && str[i]<=122)
str[i]=str[i]-32;
}
printf("The String In Upper Case IS:-%s ",str);
getch();
}

