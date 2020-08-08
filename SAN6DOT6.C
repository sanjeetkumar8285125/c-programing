#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("for ascending order");
for(i=1;i<=10;i++)
printf("%5d",i);
printf("\n for descending order");
for(i=10;i>=1;i--)
printf("%5d",i);
getch();
}
