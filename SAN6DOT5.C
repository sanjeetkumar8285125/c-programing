//write progrm to disply even no from 0 to14
#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
clrscr();
for(i=0;i<=15;)
{
i=i+2;
printf("%6d",i);
getch();
}
}