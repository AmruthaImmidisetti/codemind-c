#include<stdio.h>
int main()
{
    int n,ld;
    scanf("%d",&n);
    ld=n%10;
    while(n!=0)
    {
        n=n/10;
        if(n<10)
        break;
    }
    printf("%d",ld+n);
}