//WAP to calculate Length of a String...
#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int count=0,i=0;
printf("Enter Any Word:- ");
gets(a);
while(a[i]!='\0')
{
count++;
i++;
}
printf("Length Of Your Word Is:- %d",count);
getch();
}

