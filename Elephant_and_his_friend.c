#include<stdio.h>
#include<math.h>
int main()
{
int x,a,b;
scanf("%d",&x);
a=x/5;
b=x%5;
if(b==0) printf("%d",a);
else printf("%d",a+1);
}