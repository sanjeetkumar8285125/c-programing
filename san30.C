#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
int sum=0;
printf("Enter the n i.e. series");
scanf("%d",&n);
sum=(n*(n+1))/2;
printf("sum of the series:");
for(i=1;i<=n;i++)
{
if(i!=n)
printf("%d+",i);
else
printf("%d=%d",i,sum);
}
getch();
}