#include<stdio.h>
#include<conio.h>
int fabo(int n);
void main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
printf("%d",fabo(n));
}
int fabo(int a)
{
if(a==1||a==2)
return(a);
else
return(fabo(a-1)+fabo(a-2));
}
