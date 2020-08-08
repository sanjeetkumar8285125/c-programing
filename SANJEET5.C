//write a c program to calculate area of rectangle
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
int l;
int b;
printf("enter the length");
scanf("%d",&l);
printf("enter the breadth");
scanf("%d",&b);
a=l*b;
printf("a is=%d",a);
getch();
}