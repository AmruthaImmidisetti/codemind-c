#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d,e,f;
    d=a+b;
    e=b+c;
    f=c+a;
    if(d>e && d>f)              printf("%d",d);
    else if(e>d && e>f)         printf("%d",e);
    else                        printf("%d",f);
}