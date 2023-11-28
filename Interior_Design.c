#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e=a+b;
    int f=c+d;
    if(e<f) printf("%d",e);
    else printf("%d",f);
}