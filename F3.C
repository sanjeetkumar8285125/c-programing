//takes something returns nothing
#include<stdio.h>
#include<conio.h>
void main()
{
void interest(int,float,int);
int x,z;
float y;
clrscr();
printf("enter principle ,rate and time");
scanf("%d %f %d",&p,&r,&t);
interest(x,y,z);
getch();
}

void interest(int p,float r,int t)
{
float si;
si=(p*r*t)/100;
printf("simple interest is %f",si);
}