int fibo(int a);
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("\t%d",fibo(i));
}
int fibo(int a)
{

    if(a==1||a==2)
        return(1);
    else
        return(fibo(a-1)+fibo(a-2));

}
