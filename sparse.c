//Question?. 24 Write a program to perform sparse matrix...
//Input:
#include<stdio.h>
int main()
{
int i,j;
int size = 0;
int k = 0;
int c[3][size];
int s[4][5]=
{
{0 , 0 , 3 , 0 , 4 },
{0 , 0 , 5 , 7 , 0 },
{0 , 0 , 0 , 0 , 0 },
{0 , 2 , 6 , 0 , 0 }
};
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
printf("\n Element of s[%d][%d]: [ %d ]",i,j,s[i][j]);
}
}
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
if(s[i][j]!= 0)
size++;
}
}
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
if(s[i][j]!= 0)
{
c[0][k]=i;
c[1][k]=j;
c[2][k]=s[i][j];
k++;
}
}
}
printf("\n\n Sparse Matrix: \n");
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<size;j++)
{
printf(" %d ",c[i][j]);
}
printf("\n");
}
return 0;
}
