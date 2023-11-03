#include<stdio.h>
int main()
{
   int t,i;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       int n,m,k,x;
       scanf("%d %d %d",&n,&m,&k);
       x=n+k;
       if(x<=m) printf("YES
");
       else printf("NO
");
    }
}