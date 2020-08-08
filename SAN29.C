//write a program to sum odd number
//1+3+5+7+......n
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
{
printf("%d",i);
}
getch();
}