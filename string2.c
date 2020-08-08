//WAP to Compare two Strings...
#include<stdio.h>
#include<conio.h>
void main()
{
char str1[30],str2[30];
int i,temp=0;
clrscr();
printf("Enter First String:- ");
gets(str1);
printf("Enter Second String:- ");
gets(str2);
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]==str2[i])
temp=1;
else
temp=0;
}
if(temp==1)
printf("Both String Are Same");
else
printf("Strings Are Not Same");
getch();
}

