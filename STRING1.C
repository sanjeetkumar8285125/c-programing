//WAP to Concatenate two strings...
#include<stdio.h>											
#include<conio.h>
void main()
{
char name1[30],name2[30],name3[30];
int i,j;
clrscr();
printf("  PROGRAM FOR CONCATENATION  \n ");
printf("Enter First String:-");
scanf("%s",&name1);
printf("Enter Second String:-");
scanf("%s",&name2);
for(i=0;name1[i]!='\0';i++)
name3[i]=name1[i];
for(j=0;name2[j]!='\0';++j)
name3[i+j]=name2[j];
name3[i+j]='\0';
printf("The Concatenated string is:\n %s",name3);
getch();
}

