#include<stdio.h>
int main()
{
int x,y;
scanf("%d%d",&x,&y);
int a=x%y;
int b=x/y;
if(a==0) printf("%d",b);
else printf("%d",a+b);
}