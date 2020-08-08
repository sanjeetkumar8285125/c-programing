int main()
{
int i,r,j,k=0;
printf("enter the numbers of rows");
scanf("%d",&r);
for(i=0;i<=r;i++)
{
for(j=1;j<=i;++j)
printf("%d",k+j);
++k;
printf("\n");
}
}
