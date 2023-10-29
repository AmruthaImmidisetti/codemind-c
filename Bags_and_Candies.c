#include<stdio.h>
#include<math.h>
int main()
{
int n,k,m;
scanf("%d%d%d",&n,&m,&k);
int a,b,c;
a=k*m;
b=n/a;
c=n%a;
if(c==0) printf("%d",b);
else printf("%d",b+1);
}