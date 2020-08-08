//Write a program to generate
//1^3+2^3+3^3........n^3
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int sum=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i*i);
	printf("\nsum is =%d",sum);
	}
}
	
