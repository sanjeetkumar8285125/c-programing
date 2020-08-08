#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
int main()
{
	int x,y;
	printf("enter the value of x and y");
	scanf("%d%d",&x,&y);
	swap(x,y);
}
void swap(int a,int b)
{
int k;
	{
	k=a;
	a=b;
	b=k;
	printf("a=%d b=%d",a,b);
	}
	
