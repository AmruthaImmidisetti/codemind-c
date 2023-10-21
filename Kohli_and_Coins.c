#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n/10;
    if(n%10!=0 && n%10!=5) printf("-1");
    else if( n%10==5 ) printf("%d",x+1);
    else    printf("%d",x);
    //if(n%10!=0 && n%10!=5)
}