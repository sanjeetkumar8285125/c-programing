#include<conio.h>
#include<stdio.h>
void main()
{
int a[10],b[5],i,even=0,odd=0;
clrscr();
printf("Enter elements of array");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("Even elements are:- ");
        for(i=0;i<10;i++)
           {
             if(a[i]%2==0)
                    {
             printf(" %d ",a[i]);
                  even++;
               }
         }
printf("\nOdd elements are:- ");
         for(i=0;i<10;i++)
            {
                 if(a[i]%2!=0)
                 {
             printf(" %d ",a[i]);
                    odd++;
                    }
         }
        printf("\nTotal even nos. are %d\n",even);
             printf("Total odd nos. are %d\n",odd);
getch();
}

