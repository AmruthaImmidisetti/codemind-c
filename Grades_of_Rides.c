#include<stdio.h>
int main()
{
    int hurlf,spinf,speedf;
    scanf("%d %d %d",&hurlf,&spinf,&speedf);
    if(hurlf>50 && spinf>60 && speedf>100) printf("10");
    else if(hurlf>50 && spinf>60) printf("9");
    else if(spinf>60 && speedf>100) printf("8");
    else if(hurlf>50 && speedf>100) printf("7");
    else if(hurlf>50 || spinf>60 || speedf>100) printf("6");
    else printf("5");
}