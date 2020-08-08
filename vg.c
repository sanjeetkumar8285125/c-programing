#include<stdio.h>
#include<conio.h>
int main()
{
char str[20],i=0;
printf("enter the string");
gets(str);
while(str[i]!='\0')
i++;
printf("length of string is%d",i);
}
