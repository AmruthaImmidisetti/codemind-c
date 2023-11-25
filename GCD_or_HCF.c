#include<stdio.h>
int main()
{
    int a,b,m,i,gcd;
    scanf("%d %d",&a,&b);
    for(i=1;;i++)
    {
        m=i*a;
        if(m%b==0) break;
        
    }
    gcd=(a*b)/m;
    printf("%d",gcd);
    
}