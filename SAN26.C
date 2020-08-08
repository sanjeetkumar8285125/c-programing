 //wap to sum the series
 //1^2+2^2+3^2+......n^2
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,n;
 int sum=0;
 //clrscr();
 printf("enter the no");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 sum=sum+(i*i);
 printf("sum is %d",sum);
 getch();
 }
