#include<stdio.h>
int main()
{
    int h,m,tm,x;
    scanf("%d %d",&h,&m);
    tm=1440;
    x=(h*60)+m;
    printf("%d",tm-x);
}