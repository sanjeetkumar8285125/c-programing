#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
float sq,sum=0;
printf("Enter any no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("%d\n",fact);
sq=1/fact;
sum=sum+sq;
}
printf("Sum of 1/factorials is:%f",sum);
 getch();
  }

