#include<stdio.h>
#include<conio.h>
void main()
{
int fact(int);
int n,k;
printf("enter the number");
scanf("%d",&n);
k=fact(n);
printf("factorial is %d",k);
getch();
}
int fact(int n)
{
int f;
if(n==1)
return(n);
else
f=n*fact(n-1);
return(f);
}
