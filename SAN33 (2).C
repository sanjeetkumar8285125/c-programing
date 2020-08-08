//wap to find factorial of a no. using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
int fact=1;
int x;
int i=1;
clrscr();
printf("enter the number");
scanf("%d",&x);
while(i<=x)
{
fact=fact*i;
printf("\n%d",fact);
i++;
getch();
}
}