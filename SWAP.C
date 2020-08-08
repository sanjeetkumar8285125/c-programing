//wap to swap of two number not using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a,b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
getch();
}