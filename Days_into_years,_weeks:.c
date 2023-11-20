#include<stdio.h>
int main()
{
    int n,h,r,w;
    scanf("%d",&n);
    h=n/365;
    r=n%365;
    w=r/7;
    printf("%d
%d
",h,w);
    
}