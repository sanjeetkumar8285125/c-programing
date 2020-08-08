/* Fibonacci Series using while loop */
// 0 1 1 2 3 5 8 13...
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a,b,c;
    a=-1;
    b=1;
    printf("enter a number:");
    scanf("%d",&n);
   for(i=0;i<20;i++)
    {
	printf("%d ",c);
	c = a + b;
	a = b;
	b = c;
    }
}
