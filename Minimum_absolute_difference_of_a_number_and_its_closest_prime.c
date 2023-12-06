#include<stdio.h>
int main()
{
	int n,i,c=0,j,np,bp,k;//n=6
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
	    if(n%k==0)
	    {
	        c++;
	    }
	}
	if(c==2) 
	{
	    printf("0");
	  
	}
	else 
	{
	for(i=n+1;i>=1;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2) 
		{
			np=i;
		break;
		}
		
	}
   // printf("%d
",np-n);
	for(i=n-1;;i--)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2) 
		{
			bp=i;
		break;
		}
		
	}
	//printf("%d
",n-bp);
	if(np-n>n-bp) printf("%d",n-bp);
	else printf("%d",np-n);
	}
	
}