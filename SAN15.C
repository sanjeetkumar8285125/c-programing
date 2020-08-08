#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a,b,c");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater than b and c");
}
else if(b>a&&b>c)
{
printf("b is greaer than a and c");
}
else if(c>a&&c>b)
{
printf("c is greater than a and b");
}
else
{
printf("all are equal or any two value are equal");
}
getch();
}