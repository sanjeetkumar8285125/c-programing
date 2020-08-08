//write a program to check whether a number is even or odd
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int no;
printf("enter a number");
scanf("%d",&no);
if(no%2==0)
printf("no is even");
else
printf("no is odd");
getch();
}