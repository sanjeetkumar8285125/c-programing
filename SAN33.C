#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
long fact=1;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of %d=%1d",n,fact);
getch();
}