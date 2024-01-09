#include<stdio.h>
int main()
{
    long long int i,n,f=0,s=1,t;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
    	if(i<=1)    t=i;
    	else
		{
			t=f+s;
			f=s;
			s=t;
		}
		printf("%lld ",t);
	}
}