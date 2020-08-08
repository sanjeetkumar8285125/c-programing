#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j;
printf("enter the no of row and column");
scanf("%d%d",&r1,&c1);
	printf("enter the elements of first matrix");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
printf("enter the no of row and column");
scanf("%d%d",&r2,&c2);
	printf("enter the elements of second matrix");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
			if(r1==r2 && c1==c2)
			for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		c[i][j]=a[i][j]+b[i][j];
		else
			printf("you can not add");
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
printf("%d  ",c[i][j]);
printf("\n");
		}
}
