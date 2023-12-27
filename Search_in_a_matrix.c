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
    int x;
    scanf("%d",&x);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x==arr[i][j]) 
            flag=1;
        }
    }
    if(flag==1) printf("1");
    else printf("0");
}