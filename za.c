int main()
{
    int a[10],i;
    int pos=0,neg=0;
    printf("enter the elements of array");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
      for(i=0;i<10;i++)
      {
        if(a[i]>0)
        pos++;
      else
        neg++;
        }
      printf("total no of positive elemnets is %d",pos);
      printf("total no of negative elements is %d",neg);
}
