#include<stdio.h>
#include<conio.h>
void main()
{
int ch,i;
printf("\nwe have seven day in a week");
printf("1.\nsunday");
printf("2.\nmonday");
printf("3.\ntuesday");
printf("4.\nwednesday");
printf("5.\nthursday");
printf("6.\nfriday");
printf("7.\nsaturday");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("sunday");
break;
case 2:
printf("monday");
break;
case 3:
printf("tuesday");
break;
case 4:
printf("wednesday");
break;
case 5:
printf("thursday");
break;
case 6:
printf("friday");
break;
case 7:
printf("saturday");
break;
default:
printf("invalid key");
getch();
}
}
