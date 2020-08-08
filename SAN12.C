//Write a program tyo read marks of a student in three subjects where maximum mark is 100.calculate the percentage and display the following
//(i)75% above-display first divison
//(ii)60-75% -display second divison
//(iii)below 60%-display third divison
#include<stdio.h>
#include<conio.h>
void main()
{
int m1; float per;
int m2;
int m3 ;
clrscr();
printf("enter the marks of m1 out of 100");
scanf("%d",&m1);
printf("enter the marks of m2 out of 100");
scanf("%d",&m2);
printf("enter the marks of m3 out of 100");
scanf("%d",&m3);
per=(m1+m2+m3)/3;
printf("percentage is=%f",per);
if(per>=75)
printf("first divison");
else if(per>=60&&per<75)
printf("second divison");
else
printf("third divison");
getch();
}