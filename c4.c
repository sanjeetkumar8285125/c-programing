//calculate volume of cuboid 
//with arguments with return
#include<stdio.h>
#include<conio.h>
int cuboid(int l,int b,int h);
void main()
{
	int l,b,h,vol;
	clrscr();
	printf("enter the lenght,breadth,height");
scanf("%d%d%d",&l,&b,&h);	
	vol=cuboid(l,b,h);
	printf("volume is %d",vol);
	getch();
}
int cuboid(int l,int b,int h)
{
return(l*b*h);
}
