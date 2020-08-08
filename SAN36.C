//wap to print the table of a no.using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,prod,x;
i=1;

printf("enter the number");
scanf("%d",&x);
while(i<=10)
{
prod=i*x;
printf("\n%11d",prod);
i++;
getch();
}
}