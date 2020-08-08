//Wap to find squares of all numbers whose least significant digit digit is 5
#include<stdio.h>
#include<conio.h>
void main()
{
int s,d;
int prod;
printf("enter the number");
scanf("%d",&s);
d=s%10;
if(d==5)
{
prod=s*s;
printf("\n square=%d",prod);
}
else
printf("\n invalid no");
}
