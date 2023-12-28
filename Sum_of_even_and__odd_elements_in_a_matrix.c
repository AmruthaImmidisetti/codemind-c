#include<stdio.h>
int main()
{
    int m,n,i,j,flag=0;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int s=0,sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]%2==0) 
            {
                s=s+arr[i][j];
            }
            else if(arr[i][j]%2!=0)
            {
                sum=sum+arr[i][j];
            }
            
        }
    }
 
    printf("%d %d",s,sum);
}
   