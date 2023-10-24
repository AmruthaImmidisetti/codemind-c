#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a,b,c,d,e,f,z;
    z=x+y;
    a=(500-(x*2));
    b=(1000-(z*4));
    c=a+b;
    d=(500-(z*2));
    e=(1000-(y*4));
    f=d+e;
    if(c>f) printf("%d",c);
    else printf("%d",f);
}