//calculate volume of cuboid 
//without arguments with return
#include<stdio.h>
#include<conio.h>
int cuboid(void);
void main()
{
	int vol;
	clrscr();
	vol=cuboid();
	printf("volume is %d",vol);
	getch();
}
int cuboid()
{
	int l,b,h;
int vol;
printf("enter the lenght,breadth,height");
scanf("%d%d%d",&l,&b,&h);
return(l*b*h);
}
