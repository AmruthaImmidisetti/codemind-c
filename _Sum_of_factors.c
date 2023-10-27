#include<stdio.h>
int main()
{
    int i=1,n,a,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
    	a=n%i;
    	if(a==0)
    	{
			sum+=i;
		}
    }
	printf("%d",sum);
}