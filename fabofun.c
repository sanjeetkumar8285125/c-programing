#include<stdio.h>
#include<conio.h>
int fib(int n);
void main()
{
	int i,n;
	printf("enter the no of term you have to printed ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d",fib(i));
}
int fib(int n)
{
	if(n==1||n==2)
	return(1);
	return(fib(n-1)+fib(n-2));
}

