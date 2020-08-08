#include<stdio.h>
#include<conio.h>
void main()
{  clrscr();
int r; float sa;
int h;
float pi=3.14;
printf("enter the radius");
scanf("%d",&r);
printf("enter the height");
scanf("%d",&h);
sa=2*pi*r*h;
printf("surface area=%f",sa);
getch();
}