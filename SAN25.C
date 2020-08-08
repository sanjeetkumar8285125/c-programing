 //write a program to sum the series
 //0+1+2+3+..........n
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,i;
 int sum=0;
 printf("enter a number");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 sum=sum+i;
 printf("/nsum is %d",sum);
 getch();
 }
