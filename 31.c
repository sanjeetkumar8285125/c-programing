#include<stdio.h>
#include<conio.h>
#include<math.h>
void square(int a,int b,int c);
void main()
{ 
int a,b,c;
printf("enter value of a,b,c");
scanf("%d %d %d",&a,&b,&c);
square(a,b,c);
}
void square(int a,int b,int c)
{ 
int D;
float x1,x2;
D=(b*b)-(4*a*c);
if(D>0)
{
printf("Real Roots");
x1= (-b+sqrt(D))/(2*a);
x2= (-b-sqrt(D))/(2*a);
printf("\nvalue of \n%f \n%f",x1,x2);
}
else if(D==0)
{
printf("equal roots");
x1=x2= -b/(2*a);
printf("value of %f %f",x1,x2);
}
else
printf("imaginary roots");
}

