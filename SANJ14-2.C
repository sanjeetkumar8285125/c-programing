//write a program to find roots of a quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d,x1,x2;
clrscr();
printf("enter the value of a,b,c");
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
printf("roots are real");
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("roots are %d %d",x1,x2);
}
else if (d==0)
{
x1=x2=-b/(2*a);
}
printf("imaginary roots");
getch();
}