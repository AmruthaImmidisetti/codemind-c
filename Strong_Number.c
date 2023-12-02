#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int n,i,f=1,r,sum=0;
        scanf("%d",&n);
        int t=n;
        while(n!=0)
        {
        	f=1;
        	r=n%10;
        	for(i=1;i<=r;i++)
        	{
        		f=f*i;
	    	}
	    	sum=sum+f;
	    	n=n/10;
	    }
	    if(t==sum)		printf("Strong
");
	    else			printf("Not Strong
");
    }
}