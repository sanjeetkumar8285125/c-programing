void display(char s[25],int n,int w);
int main()

{
    struct student
    char sa[20];
    int age;
    int weight;
struct student s1={"sanjeet",18,60};
display(s1.sa,s1.age,s1.weight);
}
void display(char s[25],int n,int w)
{
    printf("data is %s%d%d",s,n,w);
}
