#include<stdio.h>
#include<conio.h>
void fabo(int n);
void main()
{
int n;
printf("enter the no");
scanf("%d",&n);
fabo(n);
}
void fabo(int n)
{
int a=-1,b=1,c,i;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
}

