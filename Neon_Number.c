#include<stdio.h>
int main()
{
    int n,sq,i=1,sum=0;
    scanf("%d",&n);
    sq=n*n;//81
   while(sq!=0)
   {
       
       sum=sum+(sq%10);
       sq=sq/10;
       i++;
       
   }
   if(n==sum) printf("Neon Number");
   else printf("Not Neon Number");
}