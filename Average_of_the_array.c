#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
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
		sum=sum+arr[i];
	}
	avg=(float)sum/n;
	printf("%.2f",avg);
}
