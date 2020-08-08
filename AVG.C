//warite a program to calculate average of three no
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float avg;
clrscr();
printf("enter the value of a,b,c");
scanf("%d %d %d",&a,&b,&c);
avg=(a+b+c)/3;
printf("avg is %f",avg);
getch();
}