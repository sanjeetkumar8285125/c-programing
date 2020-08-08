#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,div,sq;
	int sum=0;
	printf("enter the no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sq=i*i;
		div=1/sq;
		sum=sum+div;
		printf("sum of the series is %d",sum);
	}
	//getch();
}
