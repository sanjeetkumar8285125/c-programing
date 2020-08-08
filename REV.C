#include<stdio.h>
#include<conio.h>
int main()
{
int l,i;
char s[20],ch;
printf("enter string");
gets(s);
for(l=0;s[l];l++);
for(i=0;i<l/2;i++)
{
    if(s[i]!=s[l-1-i])
    {
        printf("not a palindrome");
    break;
}
}
    if(i==l/2)
        printf("palindrome");
}
