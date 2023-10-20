#include<stdio.h>
int main()
{
    int h,m,time;
    scanf("%d",&time);
    h=(time/60);
    m=(time%60);
    
    printf("%d Hour(s) %d Minute(s)",h,m);
}