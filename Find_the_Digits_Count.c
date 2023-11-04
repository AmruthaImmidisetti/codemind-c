#include<stdio.h>
int main()
{
 int n,s=1,dc=0;
 scanf("%d",&n);
 for(;n>0;)
 {
   s=(n%10);
   dc=dc+1;
   n=n/10;
 }
 printf("%d",dc);
 

   
}