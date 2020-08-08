#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int fact;
	fact=1;
	printf("enter the no.");
	scanf("%d",&n);
for(i=1;i<=n;i++)
{

	fact=(fact*i);

}
printf("\nfactorial is %d",fact);
}

	
