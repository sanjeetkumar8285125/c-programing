#include<stdio.h>
#include<conio.h>
void main()
{
void add(void);
clrscr();
add();
getch();
}
void add()
{
int a,b,c;
printf("enter a and b");
scanf("%d %d",&a,&b);
c=a+b;
printf("sum is %d",c);
}
