#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("for even number");
for(i=0;i<=50;)
{
i=i+2;
printf("%5d",i);
}
printf("for odd number");
for(i=1;i<=50;)
{
i=i+2;
printf("%5d",i);
getch();
}
}




