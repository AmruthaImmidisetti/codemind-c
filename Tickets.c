#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int cost=4*x;
    if(cost<=1000) printf("YES
");
    else printf("NO");
}