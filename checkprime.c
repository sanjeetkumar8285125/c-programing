#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,x;
	printf("enter two values");
	scanf("%d%d",&a,&b);
	for(x=a+1;x<=b-1;x++)
	{
		for(i=2;i<=x;i++)
		if(x%i==0)
		break;
		if(i==x)
		printf("\t%d",x);
}

}
