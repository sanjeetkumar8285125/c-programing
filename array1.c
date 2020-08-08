//wap to display the element in an array
#include<stdio.h>
#include<conio.h>
 void main()
{
int a[10],i;
printf("enter the elements of array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("Entered array is:-\n");
for(i=0;i<10;i++)
printf(a[i]);
getch();
}
