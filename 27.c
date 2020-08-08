#include<stdio.h>
#include<conio.h>
void area_sq();
void area_rect();
void area_circle();
int main()
{
int ch;
printf("Area of\n1.Square\n2.Rectangle\n3.Circle\n");
printf("enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:area_sq();
break;
case 2: area_rect();
break;
case 3:area_circle();
break;
default:printf("wrong choice");
}
}
void area_sq()
{
int a,area;
printf("Enter the side of the square: ");
scanf("%d",&a);
area=a*a;
printf("The area of the square is: %d\n",area);
}
void area_rect()
{
int a,b,area;
printf("Enter the length and bredth: ");
scanf("%d %d",&a,&b);
area=a*b;
printf("The area of the rectangle is: %d\n",area);
}
void area_circle()
{
int a,area;
printf("Enter the radius of the circle");
scanf("%d",&a);
area=(3.14*a*a);
printf("The area of the circle is: %d\n",area);
}

