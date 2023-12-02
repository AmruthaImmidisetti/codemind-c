#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        n=a-b;
    }
    else
    {
        n=b-a;
    }
    if(n%10==0)  printf("%d",n/10);
    else        printf("%d",(n/10)+1);
} 