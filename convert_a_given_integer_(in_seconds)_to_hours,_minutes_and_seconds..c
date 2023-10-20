#include<stdio.h>
int main()
{
    int h,m,s,time;
    scanf("%d",&time);
    h=(time%86400)/(60*60);
    m=(time%3600)/60;
    s=(time%60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}