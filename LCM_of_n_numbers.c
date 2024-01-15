#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<n;i++)
	{
        if(arr[i]>max)
		{
            max=arr[i];
        }
    }
    int lcm=max;
    while(1)
	{
        int c=0;
        for(i=0;i<n;i++)
		{
            if(lcm%arr[i]==0)
			{
                c++;
            }
        }
        if(c==n)
		{
            printf("%d
",lcm);
            break;
        }
        lcm+=max;
    }
}