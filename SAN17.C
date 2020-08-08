//write a program to implement addition,substraction,multiply,division of two no.using menu driven approach and switch case
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,choice;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
printf("we have 4 choice\n");
printf("1.add\n");
printf("2.substraction\n");
printf("3.multiply\n");
printf("4.division\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:c=a+b;
printf("sum is=%d",c);
break;
case 2:c=a-b;
printf("difference is=%d",c);
break;
case 3:c=a*b;
printf("product is=%d",c);
break;
case 4:c=a/b;
printf("divison is=%d",c);
break;
default:
printf("wrong choice");
}
printf("i am done");
getch();
}
