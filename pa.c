#include<stdio.h>
#include<conio.h>
void swap (int *x,int *y);
void main()
{
int a,b;
printf("enter the a and b");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("a=%d b=%d",a,b);
}
void swap (int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
