//WAP to Reverse a String...
#include<stdio.h>
#include<conio.h>
int main()
{
char str[20],rev[20];
int i=0,j=0;
//clrscr();
printf("Enter Any String:- ");
scanf("%s",str);
while(str[i]!='\0')
{
i++;
}
i--;
while(i>=0)
{
rev[j]=str[i];
j++;
i--;
}
rev[j]='\0';
printf("Reverse Of Your String Is:- %s",rev);
getch();
}

