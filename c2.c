//calculate volume of cuboid 
//with arguments without return
#include<stdio.h>
#include<conio.h>
void cuboid(int l,int b,int h);
void main()
{
	int l,b,h;
	clrscr();
	printf("enter the lenght,breadth,height");
scanf("%d%d%d",&l,&b,&h);	
	cuboid(l,b,h);
	getch();
}
void cuboid(int l,int b,int h)
{
int vol;
vol=l*b*h;
printf("volume is %d",vol);
}
