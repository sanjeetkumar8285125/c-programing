#include<stdio.h>
#include<conio.h>
void display(char s[20],int t,float n);
void main()
{
struct student
{
char name[10];
int age;
float weight;
};
struct student s1 = {"SANJEET",19,55};
display(s1.name,s1.age,s1.weight);
}
void display(char s[20],int t,float n)
{
printf("data is \n%s \n%d \n%f",s,t,n);
}

