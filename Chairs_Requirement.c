#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int res=x-y;
    if(res>0) printf("%d",res);
    else if(x==y) printf("%d",res);
    else   printf("0");
}