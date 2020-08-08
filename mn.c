#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],i,l,ch;
printf("enter the string");
gets(str);
for(l=0;str[l];l++);
for(i=0;i<l/2;i++)
{
ch=str[i];
str[i]=str[l-1-i];
str[l-1-i]=ch;
}
printf("%s",str);
}
