//write a program to calculate the area of the circle
#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int r;
float pi=3.14;
float a;
printf("enter the radius");
scanf("%d",&r);
a=pi*r*r;
printf("area of circle is=%f",a);
getch();
}