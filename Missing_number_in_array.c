#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,i,flag=0,k;
        scanf("%d",&n);
        int arr[n-1];
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(k=1;k<=n;k++)
        {
            flag=0;
            for(i=0;i<n-1;i++)
            {
                if(k==arr[i])       flag=1;
            }
            if(flag==0)       printf("%d
",k);
        }
    }
}