#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    for(i=1;i<=b;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}