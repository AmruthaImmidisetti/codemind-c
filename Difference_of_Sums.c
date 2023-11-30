#include<stdio.h>
int main()
{
    int n,x,y,z,p;
    scanf("%d",&n);
    x=n*(n+1)/2;
     y=x*x;
     p=n*n;
    z=(n+p+2*p+2*p*n)/6;
    printf("%d",y-z);
    
}