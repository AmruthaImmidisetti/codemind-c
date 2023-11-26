#include<stdio.h>
int main()
{
    int n,m,i,j,k,r=0,sum=0,p,q;
    scanf("%d %d",&n,&m);
    for(i=1;i<n;i++)
    {
        p=n%i;
        if(p==0)
        {
            sum=sum+i;
           // r=r+i;
        }
        
    }
     for(j=1;j<n;j++)
     {
     	q=m%j;
     	if(q==0)
     	{
     		r=r+j;
		 }
	 }
   if(n==r && m==sum) printf("Amicable");
   
   else printf("Not Amicable");
}