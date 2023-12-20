#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int arr[n];
	//reading array elements
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printing array elements
	for(i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
		sum=sum+arr[i];
	    }
	}
		printf("%d
",sum);
}