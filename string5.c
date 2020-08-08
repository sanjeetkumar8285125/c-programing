//WAP to Copy A String...
#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20],str2[30];
int i=0;
clrscr();
printf("Enter The String:- ");
gets(str1);
while(str1[i]!='\0')
{
str2[i]=str1[i];
i++;
}
str2[i]='\0';
printf("\nCopied String Is:- %s",str2);
getch();
}

