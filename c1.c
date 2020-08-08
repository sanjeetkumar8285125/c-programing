//calculate volume of cuboid 
//without arguments without return
#include<stdio.h>
#include<conio.h>
void cuboid(void);
void main()
{
	clrscr();
	cuboid();
	getch();
}
void cuboid()
{
int l,b,h,vol;
printf("enter the lenght,breadth,height");
scanf("%d%d%d",&l,&b,&h);
vol=l*b*h;
printf("volume is %d",vol);
}
