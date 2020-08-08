//write a program calculate energy bill read the meter reading and charges are as follow
//no. of units	       	consumed rates
//200-500		rs3
//100-200		rs2
//less than 100		rs1
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int unit;
int bill;
printf("enter the unit");
scanf("%d",&unit);
if(unit>=200&&unit<=500)
bill=unit*3;
else if(unit>=100&&unit<200)
bill=unit*2;
else
bill=unit*1;
printf("the bill is=%d",bill);
getch();
}