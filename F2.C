//takes nothing returns nothing
#include<stdio.h>
#include<conio.h>
void main()
{
void area(void);
clrscr();
area();
getch();
}
void area()
{
int a,b,area;
printf("enter the length & breadth");
scanf("%d %d",&a,&b);
area=a*b;
printf("area is %d",area);
}