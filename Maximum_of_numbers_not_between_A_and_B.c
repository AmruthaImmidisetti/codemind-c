#include<stdio.h>
int main()
{
	int n,i,a,b;
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    int max=0,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            c++;
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    if(c>0)     printf("%d",max);
    else        printf("-1");
}