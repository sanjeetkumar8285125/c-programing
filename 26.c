#include<stdio.h>
#include<conio.h>
int largest(int a[10],int n);
int main()
{
int a[10],i,max,n;
printf("enter size of array: ");
scanf("%d",&n);
printf("enter array ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=largest(a,n);
printf("largest element is %d\n",max);
getch();
}
int largest(int a[10],int n)
 { 
int max,i;
max=a[0];
for(i=0;i<n;i++)
   {
if(max<a[i])
max=a[i];
}
return(max);
}

