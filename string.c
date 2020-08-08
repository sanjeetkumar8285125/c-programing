//WAP to Concatenate two strings...
#include<stdio.h>
#include<conio.h>
void main()
{
char str1[30],str2[30],str3[30];
int i,j;
clrscr();
printf("  PROGRAM FOR CONCATENATION  \n ");
printf("Enter First String:-");
scanf("%s",&str1);
printf("Enter Second String:-");
scanf("%s",&str2);
for(i=0;str1[i]!='\0';i++)
str3[i]=str1[i];
for(j=0;str2[j]!='\0';++j)
str3[i+j]=str2[j];
str3[i+j]='\0';
printf("The Concatenated string is:\n %s",str3);
getch();
}

