#include<stdio.h>
#include<conio.h>
void main()
{
int fib(int n);
int i,n;
printf("enter th number you have printed");
scanf("%d",&n);
for(i=i;i<=n;i++)
printf("%d",fib(i));
}
int fib(int n)
{
if(n==1||n==2)
return(1);
else
return(fib(n-1)+fib(n-2));
}
