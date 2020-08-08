#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
int p;
float r;
int t;
float si;
printf("enter the value of principal");
scanf("%d",&p);
printf("enter the rate");
scanf("%d",&r);
printf("enter the time");
scanf("%d",&t);
si=(p*r*t)/100;
printf("SI is=%f",si);
getch();
}