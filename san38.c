//wap to sum the series
//1^3+2^3+3^3+.....n^3
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i=1;
	int sum=0;
	printf("enter the value of n");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+(i*i*i);
		printf("sum of the series is %d\n",sum);
		i++;
	}
	}
