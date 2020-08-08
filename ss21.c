#include<stdio.h>
#include<conio.h>
int fact(int a);
void main()
{
	int n,f;
	printf("enter the number");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial is %d",f);
}
int fact(int a)
{
	int factorial;
	if(a==1)
	return(a);
	else
	factorial=a+fact(a-1);
	return(factorial);
}

