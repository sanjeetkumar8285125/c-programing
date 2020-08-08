#include<stdio.h>
#include<conio.h>
void main()
{
//int count=1;
char s[20];
int i;
printf("enter  string");
gets(s);
for(i=1;s[i]!='\0';i++);
	printf("\nlength of string %d",i);
}
