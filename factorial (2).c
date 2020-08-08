//#include<conio.h>
#include<stdio.h>
void main()
{
	int fact=1;
	int i,n;
	int sum=0;
	printf("enter the no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		fact=fact*i;
		{
			sum=sum+(1/fact);
		}
		printf("sum is %d",sum);
	}
}
				
