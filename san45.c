#include<stdio.h>
#include<conio.h>
void main()
{
	int sub[6],roll,total=0,i;
	char name[10];
	
	printf("enter your name");
	gets(name);
	printf("/n enter your roll no");
	scanf("%d",&roll);
	for(i=0;i<5;i++)
	{
	printf("/n enter your marks of 5 subjects");
	scanf("%d",&sub[i]);
	total=total+sub[i];
	
	}
	printf("\n your name %s", name);
	printf("\n enter your roll no %d",roll);
		for(i=0;i<5;i++)
	{
		printf("\n entered marks are %d /n",sub[i]);
	}
	printf("total marks are %d", total);
}
