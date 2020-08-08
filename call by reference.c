#include<stdio.h>
#include<iostream.h>
void swap(int *a,int *b);
void main()
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d and b=%d",a,b);
	swap(&a,&b);

}
void swap(int *a,int *b)
{
	int k;
	k=*a;
	*a=*b;
	*b=k;
printf("\nafter swapping\n");
cout<<"a="<<*a<<" "<<"b="<<*b;
}
