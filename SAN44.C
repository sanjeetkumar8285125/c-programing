//wap to take marks of 10 students in an arrays & display them
#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
int a[10],i;
for(i=0;i<10;i++)
{
printf("enter element");
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
printf("\nentered values are %d",a[i]);
getch();
}
