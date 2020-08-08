#include<stdio.h>
#include<conio.h>
struct book
{
char name[20];
int price;
} b1,b2,b3;
int main()
{ 
printf("Enter the name of the book: ");
scanf("%s",&b1.name);
printf("Enter the price of the book: ");
scanf("%d",&b1.price);
printf("Enter the name of the book: ");
scanf("%s",&b2.name);
printf("Enter the price of the book: ");
scanf("%d",&b2.price);
printf("enter the name of book: ");
scanf("%s",&b3.name);
printf("enter the price of book: ");
scanf("%d",&b3.price);
printf("\nName and Price of book 1: ");
printf("\n%s",b1.name);
printf("\n%d",b1.price);
printf("\nName and Price of book 2: ");
printf("\n%s",b2.name);
printf("\n%d",b2.price);
printf("\nName and Price of book 3: ");
printf("\n%s",b3.name);
printf("\n%d\n",b3.price);
}

