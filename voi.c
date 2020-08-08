void maximum();
void minimum();
int main()
{
    maximum();
    minimum();
}
void maximum()
{
    int a[5],i,max;
    printf("enter the no of element");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        max=a[0];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
    max=a[i];
    }
    printf("maximum no is %d",a[i]);
}
void minimum()
{
    int a[5],i,min;
    printf("enter the no of element");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        min=a[0];
    for(i=1;i<5;i++)
    {
        if(min>a[i])
    min=a[i];
    }
    printf("minimum no is %d",a[i]);
}


