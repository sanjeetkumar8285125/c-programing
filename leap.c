void leap(int lp);
int main()
{
int l;
printf("enter the year");
scanf("%d",&l);
leap(l);
}
void leap(int lp)
{
if(lp%4==0)
printf("%d is a leap year",lp);
else
printf("%d is not a leap year",lp);
}
