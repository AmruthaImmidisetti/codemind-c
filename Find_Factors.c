#include<stdio.h>
int main()
{
    int i=1,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	a=n%i;
    	if(a==0)
    	{
    		printf("%d ",i);
		}
    }
}