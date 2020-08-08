//with arguments with return
#include<stdio.h>
#include<conio.h>
int square(int s);
void main()
{
int s,area;
printf("enter side");
scanf("%d",&s);
area=square(s);
printf(" area is %d",area);
getch();
}
int square(int s)
{
return(s*s);
}