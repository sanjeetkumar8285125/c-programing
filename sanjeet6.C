//write a c program to calculate area of circle
#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float a;
float pi= 3.14;
clrscr();
printf("enter the radius") ;
scanf("%d",&r);
a=pi*r*r;
printf("calculate area=%f",a);
getch();
}
