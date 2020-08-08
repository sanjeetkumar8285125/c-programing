#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sq;
clrscr();
 printf("Enter a number");
 scanf("%d",&n);
 if(n%5==0)
 for(i=5;i<=n;i+=10)
   {
   sq=i*i;
     printf("\nThe result is%d",sq);
   }
 else
      printf("Error Input");
getch();
}

