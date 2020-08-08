#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()	
{
char name1[20],name2[20],name3[40];
clrscr();
printf("  PROGRAM FOR CONCATENATION  \n ");
printf("Enter First String:-");
scanf("%s",&name1);
printf("Enter Second String:-");
scanf("%s",&name2);
strcat(name1,"");
strcat(name1,name2);
printf("The Concatenated string is:\n %s",name1);
getch();
}
