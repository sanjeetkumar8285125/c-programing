#include<stdio.h>
#include<conio.h>
int main()
{ 
struct student
{
int roll_no;
int marks;
};
struct student s1={1,100};
struct student s2,s3;
s2=s3=s1; 
printf("The details of student 1 is: %d %d",s1.roll_no,s1.marks);
printf("\nThe details of student 2 is: %d %d",s2.roll_no,s2.marks);
printf("\nThe details of student 3 is: %d %d\n",s3.roll_no,s3.marks);
}

