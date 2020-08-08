#include<stdio.h>
void multiply(int n);
void main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	multiply(n);
}
void multiply(int n)
{
	int i,k;
for(i=1;i<=10;i++)
{
	k=n*i;
	printf("%d * %d = %d\n",n,i,k);
}
}
