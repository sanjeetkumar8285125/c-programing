#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int n;
int sum=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
sum=sum+i;
printf("sum is %d",sum);
getch();
}
