#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    d=a+b;
    e=a+c;
    f=b+c;
    if(d>c) printf("Valid triangle");
    else printf("Invalid triangle");
}