#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,t;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
a=a+b;
b=a-b;
a=b-a;
	printf("a=%d b=%d",a,b);
}
