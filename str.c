#include<stdio.h>
#include<math.h>
void main()
{
int i,j;
for(i=3;i>=-3;i--)
{
	for(j=3;j>=abs(i);j--)
	{
		printf("*");
	}
	printf("\n");
}
}
