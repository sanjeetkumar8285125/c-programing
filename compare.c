#include<stdio.h>
int compare(int a,int b);
void main()
{
int a,b,k;
printf("enter the values of a and b ");
scanf("%d%d",&a,&b);
k=compare(a,b);
printf("largest number is %d\n",k);
}
int compare(int a,int b)
{
if(a>b)
return a;
else
return b;
}

