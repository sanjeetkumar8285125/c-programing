#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i+=2)
	{
		sum=sum+i;
	}
		printf("sum of the series %d",sum);
}
