//write a program to read two number and check the greatest of two at the end and print"I AM DONE"
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
int b;
printf("enter the value of a");
scanf("%D",&a);
printf("enter the value of b");
scanf("%d",&b);
if(a>b)
printf("a is greater");
else
printf("b is greater");
printf("I AM DONE");
getch();
}