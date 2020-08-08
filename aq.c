#include<stdio.h>
#include<conio.h>
int factorial(int a);
void main()
{
int n,f;
printf("enter the number");
scanf("%d",&n);
f=factorial(n);
printf("factorial is %d",f);
}
int factorial(int a)
{
int fact;
if(a==1)
return(a);
else
fact=a*factorial(a-1);
return(fact);
}
