//write a program to calculate simple interest for users data
#include<stdio.h>
#include<conio.h>
void main()
{
float si;
int p;
float r;
int t;
clrscr();
printf("enter the principle,rate,time");
scanf("%d %f %d",&p,&r,&t);
si=(p*r*t)/100;
printf("simple interest=%f",si);
getch();
}