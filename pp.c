int main()
{
char str[20],i,l;
printf("enter the string");
gets(str);
for(l=0;str[l];l++);
for(i=0;i<l/2;i++)
{
if(str[i]!=str[l-1-i])
{
printf("not a palindrome");
break;
}
}
if(i==l/2)
printf("palndrome");
}
